rule_dead, rule_alive = [list(map(lambda y : y ==  '1', x)) for x in input().split(";")]

N, M = [int(x) for x in input().split(" ")]

def iterate_board(b):
    new_board = [[0]*N for _ in range(N)]

    for y,l in enumerate(b):
        for x,c in enumerate(l):
            neighbours = count_neighbours(b, x, y)
            if(c == True):
                new_board[y][x] = rule_alive[neighbours]
            else:
                new_board[y][x] = rule_dead[neighbours]
    return new_board
     
def convert_board(b):
    newb=[]
    for l in b:
        l = "".join(str(1 if i else 0) for i in l)
        newb.append(l)
    return "\n".join(newb)

def count_neighbours(b, x, y):
    return b[(y+1)%N][x] + b[(y-1)%N][x] + b[y][(x+1)%N] + b[y][(x-1)%N]

board = []

for i in range(N):
    board.append([x == '1' for x in list(input())])

for _ in range(M):
    board = iterate_board(board)
    
print(convert_board(board))

