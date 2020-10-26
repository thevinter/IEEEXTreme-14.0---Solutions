#Everything in here is bad, uploading just for completeness' sake
import numpy as np

def get_max_nonzero(lista, L, R):
    maximum = -9999999
    oldidx = -1
    for i in range(L-1, R):
        if lista[i] > maximum and lista[i] != 0:
            oldidx = i
            maxmimum = lista[i]
    return oldidx

hideouts = []
N = int(input())
hideouts = [int(x) for x in input().split(" ")]
total = sum(hideouts)
D = int(input())
totalv = 0
for _ in range(D):
    L, R, V = [int(x) for x in input().split(" ")]
    totalv += V
    # while (V > 0):
        #print(f"{L} and {R}")
        # min_soldiers_index =  get_max_nonzero(hideouts,L,R)
        # if(min_soldiers_index == -1):
            # break
        #print(f"the hideout with min is at idx {min_soldiers_index} and has {hideouts[min_soldiers_index]} sldiers")
        # if V <= hideouts[min_soldiers_index]:
            # hideouts[min_soldiers_index]-=V
            # V = 0

        # else:
            # V-=hideouts[min_soldiers_index]
            # hideouts[min_soldiers_index] = 0
            # break
print(totalv)

