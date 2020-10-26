#THIS WHOLE CODE IS A JOKE THAT SOMEHOW WORKED PLEASE DONT TAKE IT SERIOUSLY 
from random import random

T = int(input())

for _ in range(T):
    N = int(input())
    Wi = [int(x) for x in input().split(" ")]
    Bi = [int(x) for x in input().split(" ")]
    
    setW = set(Wi)
    setB = set(Bi)
    
    spells = ""
    
    if len(setW) > len(setB):
        spells += "B"
        balls = setB
    else:
        spells += "W"
        balls = setW
    
    samecounter = 0
    ballslen = len(balls)
    while True:
        setW = set(Wi[x-1] for x in balls)
        setB = set(Bi[x-1] for x in balls)
        
        if random() > 0.5:
            spells += "B"
            balls = setB
        else:
            spells += "W"
            balls = setW
        
        
        if len(balls) == ballslen:
            samecounter += 1
        else:
            samecounter = 0
            
        ballslen = len(balls)
        if samecounter > 5000:
            print("impossible")
            break
        
        if len(balls) == 1:
            print(spells)
            break
        
        
        
