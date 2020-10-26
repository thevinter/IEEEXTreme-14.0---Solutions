N = int(input())

def hamming_unitary(s1,s2):
    cnt = 0
    for i in range(len(s1)):
        if s1[i] != s2[i]:
            cnt+=1
            if cnt > 1:
                return False
    return cnt == 1

codes = []
count = 0
for _ in range(N):
    code = input();
    for cd in codes:
        if hamming_unitary(cd, code):
            count += 1
            
    codes.append(code)
    
print(count)