import math
import numpy as np

def cart2pol(x, y):
    phi = np.arctan2(y, x)
    return phi


def solve(points):
    points.sort()
    last = points[len(points)-1]
    comms = 0
    instant = False
    for i,p in enumerate(points):

        if(p[1] == last[1]):
            pass
        else:
            if comms == 0:
                if i == 0:
                    instant = True
                firstB = p[0]
                lastR = last[0]
            elif comms == 1:
                firstR = p[0]
                lastB = last[0]
            comms+=1
            if comms > 2:
                return False
        last = p  
    if comms == 0:
        return ((points[len(points)-1][0] - points[0][0])<math.pi)
             
    if not instant:
        angleR = 2*math.pi - (firstR - lastR)
    else:
        angleR = lastR - firstR
    angleB = lastB - firstB
    return angleR < math.pi and angleB < math.pi

T = int(input())

for i in range(T):
    N = int(input())

    points = [] 
    for j in range(N):
        x, y, cl = input().split(" ")
        if(float(x) == 0 and float(y) == 0):
            pass
        else:
            points.append((cart2pol(int(100*float(x)),int(100*float(y))), cl))
    if len(points)==0 or solve(points):
        print("YES")
    else:
        print("NO")
    



