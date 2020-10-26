import math

n, cb, cp = [int(x) for x in input().split(" ")]

black = 0
pink = 0
for i in range(n):
    b, p = input().split(" ")
    b = int(b)
    p = int(p)
    black = black + b 
    pink = pink + p 

totalpilesb = math.ceil(black / 10)
totalpilesp = math.ceil(pink / 10)

totalcostb = totalpilesb * cb
totalcostp = totalpilesp * cp 

print(totalcostb+totalcostp)
