from collections import defaultdict

N = int(input())
Si = [int(x) for x in input().split(" ")]
Q = int(input())

stones = set(Si)
l = 1
spellhistory = defaultdict(int)

spellhistory[len(stones)] = l
while True:
    stones = set(Si[x-1] for x in stones)
    l += 1
    if len(stones) in spellhistory:
        break
    spellhistory[len(stones)] = l
    
for _ in range(Q):
    K = int(input())
    print(spellhistory[K] if K in spellhistory else -1)
    
    