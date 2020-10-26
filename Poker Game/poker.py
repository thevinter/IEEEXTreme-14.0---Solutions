from collections import defaultdict

#If you're reading this then remember that this is ugly, please use a dictionary instead :(
def card(c):
    if c >= "2" and c <= "9":
        return int(c)
    if c == "X":
        return 10
    if c == "J":
        return 11
    if c == "Q":
        return 12
    if c == "K":
        return 13
    if c == "A":
        return 14
    return -1
 
#If you're reading this then remember that this is ugly, please use a dictionary instead :(    
def scard(c):
    if c >= 2 and c <= 9:
        return str(c)
    if c == 10:
        return "X"
    if c == 11:
        return "J"
    if c == 12:
        return "Q"
    if c == 13:
        return "K"
    if c == 14:
        return "A"
    return ""

N, K = [int(x) for x in input().split(" ")]
draws = [card(c) for c in input()]
raises = [r == "y" for r in input()]
hand = []

hand_len = 0
out_cards = defaultdict(int)
tot_cards = defaultdict(int)
for i in range(N):
    if draws[i] not in tot_cards and raises[i]:
        hand_len+=1
        out_cards[draws[i]] += 1
        tot_cards[draws[i]] += 1
        if(hand_len > K):
            print("impossible")
            exit()
            
    if draws[i] in tot_cards and not raises[i]:
        print("impossible")
        exit()
    tot_cards[draws[i]] += 1
    if tot_cards[draws[i]] > 4:
        print("impossible")
        exit()

timmyhand = sorted(out_cards.items(), key=lambda x: (x[1],-x[0]),reverse=True)
commoncards = sorted(tot_cards.items(), key=lambda x: (x[1],-x[0]),reverse=True)

definitehand = [c for (c,_) in timmyhand]
for (cv,cc) in commoncards:
    if cv in definitehand:
        i = 0
        while len(definitehand) < K and cc + i < 4:
            i += 1
            definitehand.append(cv)
            
        if len(definitehand) == K:
            break
        
if len(definitehand) < K:
    for cv in range(2,14+1):
        if cv in tot_cards:
            continue
        i = 0
        while len(definitehand) < K and i < 4:
            i += 1
            definitehand.append(cv)

if len(definitehand) < K:
    print("impossible")
    exit()

print("".join(scard(x) for x in sorted(definitehand)))
