N, T = [int(x) for x in input().split(" ")]
ons = input().split(" ")

seq = []
lastpos = -10
for i,pos in enumerate(ons):
    pos = int(pos)
    if i == 0:
        firstOn = (pos == 0)
        if not firstOn:
            seq.append(pos)
        seq.append(1)
        lastpos = pos
        continue
    
    if pos == lastpos + 1:
        seq[-1] += 1
    else:
        seq.append(pos - lastpos - 1)
        seq.append(1)
        
    lastpos = pos

if not firstOn:
    seq[0] += T-1 - lastpos
else:
    if lastpos == T-1:
        seq[0] += seq.pop()
    else:
        seq.append(T-1 - lastpos)

length = len(seq)
l = 1
printed = False
while l < length//2:
    l += 1
    if length % l != 0:
        continue
    periodic_subseq = seq[0:l]*(length//l)
    error = not periodic_subseq == seq
    
    if not error:
        print(T // (length//l) - 1)
        printed = True
        break
    
if not printed:
    print(T - 1)
    
    
    
    
    
    
    