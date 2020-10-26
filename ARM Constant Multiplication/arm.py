def invert(last, dist):
    dest = "R0" if last else "R1"
    return f"SUB {dest}, R0, R0, LSL #1"

def exp2(n, first, last):
    dest = "R0" if last else "R1"
    if first:
        return f"MOV {dest}, R0, LSL #{n}"
    else:
        return f"ADD {dest}, R1, R0, LSL #{n}"

def exp2neg(n, last):
    dest = "R0" if last else "R1"
    return f"SUB {dest}, R1, R0, LSL #{n}"
        
        
T = int(input())
for _ in range(T):
    C = int(input())
    
    bin = f"{C:032b}"
    ones = bin.count("1")
    firstone = 31-bin.find("1")
    cnt = 0
    if ones <= 15:
        for i,b in enumerate(reversed(bin)):
            if b == '0':
                continue
            
            cnt += 1
            print(exp2(i, cnt == 1, cnt == ones))
    else:
        zeros = 32-ones
        print(invert(ones == 0, firstone))
        for i,b in enumerate(reversed(bin)):
            if b == '1':
                continue
            
            cnt += 1
            print(exp2neg(i, cnt == zeros))
    print("END")
    
    
    
    
    