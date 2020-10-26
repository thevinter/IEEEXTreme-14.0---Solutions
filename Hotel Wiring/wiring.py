T = int(input())

for t in range(T):
    M, N, K = input().split(" ")
    floors = []
    total = 0
    for f in range(int(M)):
        floors.append(int(input()))
    floors.sort()
    
    for i in range(len(floors)):
    	if(i < int(K)):
    		total += int(N) - floors[i]
    	else:
    		total += floors[i]

    print(total)
