import numpy as np
import math

N,M,R,C = [int(x) for x in input().split(" ")]

colsums = [0]*C
rowsums = [0]*R
matrix = []
for r in range(R):
    row = [int(x) for x in input().split(" ")]
    matrix.append(row)
    rowsums[r] = sum(row)
    
    colsums = list(map(lambda x,y:x+y, colsums,row))

col_elim = C - M % C if M%C!=0 else 0
row_elim = R - N % R if N%R!=0 else 0


startrowsum = sum(rowsums[0:row_elim])
rowgroups = [0]*R
for r in range(R):
    rowgroups[r] = startrowsum
    startrowsum += rowsums[(r+row_elim)%R] - rowsums[r]

startcolsum = sum(colsums[0:col_elim])
colgroups = [0]*C
for c in range(C):
    colgroups[c] = startcolsum
    startcolsum += colsums[(c+col_elim)%C] - colsums[c]


startrow = np.argmax(rowgroups)
startcol = np.argmax(colgroups)


cornersum = 0
for r in range(startrow, startrow + row_elim):
    for c in range(startcol, startcol + col_elim):
        cornersum += matrix[r%R][c%C]
        

tile_rows = int(math.ceil(N / R))
tile_cols = int(math.ceil(M / C))

tot_cost = tile_cols*tile_rows*(sum(rowsums)+sum(colsums))//2 - rowgroups[startrow]*(tile_cols) - colgroups[startcol]*(tile_rows) + cornersum

print(tot_cost)