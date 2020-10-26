import numpy
    
def d1(word):
    d1 = []
    for i in range(len(word)):
        l = 0
        r = -1
        k = 1 if (i > r) else min(d1[l + r - i], r - i + 1)
        
        while (0 <= i - k and i + k < len(word) and word[i - k] == word[i + k]):
            k+=1
        
        d1.append(k)
        k-=1
        if (i + k > r):
            l = i - k
            r = i + k
    return d1

def d2(word):
    d2 = []
    for i in range(len(word)):
        l = 0
        r = -1
        k = 0 if (i > r) else min(d2[l + r - i + 1], r - i + 1)
        
        while (0 <= i - k - 1 and i + k < len(word) and word[i - k -1] == word[i + k]):
            k+=1
        
        d2.append(k)
        k-=1
        if (i + k > r):
            l = i - k - 1
            r = i + k
    return d2


T = int(input())
for _ in range (T):
    word = input()
    p1 = d1(word)
    p2 = d2(word)

    rightarr = numpy.zeros(len(word)).astype(int)

    for i,(a1,a2) in enumerate(zip(p1,p2)):
        for o in range(a1):
            rightarr[i+o] = max(rightarr[i+o], 2*(o+1)-1)
        for e in range(a2):
            rightarr[i+e] = max(rightarr[i+e], 2*(e+1))
        
        rightarr[i] = max(rightarr[i], 0 if i == 0 else rightarr[i-1])
    rightarr=list(rightarr)
    rightarr.pop()
    
    
    leftarr = numpy.zeros(len(word)).astype(int)

    for i,(a1,a2) in enumerate(zip(reversed(p1),reversed(p2))):
        odd = a1
        even = a2
    
        maxval = 0 if i == 0 else leftarr[i-1]
        maxval = max(maxval, leftarr[i])
        
        for o in range(odd):
            leftarr[i+o] = max(leftarr[i+o], 2*(o+1)-1)
        for e in range(even):
            leftarr[i+e+1] = max(leftarr[i+e+1], 2*(e+1))
        
        leftarr[i] = max(leftarr[i], maxval)
    
    leftarr=list(leftarr)
    leftarr.pop()

    print(max(a+b for (a,b) in zip(rightarr, reversed(leftarr))))
