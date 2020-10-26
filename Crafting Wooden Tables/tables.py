C, N, P, W = [int(x) for x in input().split(" ")]
if c >= p:
    result = min(w//c, n)
else:
    result = min(w//c, n, (n*p-w)//(p-c))
    
print(result)


