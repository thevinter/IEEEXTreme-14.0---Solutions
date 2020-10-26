def fill(space, unit):
      return (space + unit - 1) // unit
w,h,a,b,m,c = [int(x) for x in input().split()]
tiles = fill(w, a) * fill(h, b)
cuts = w * ( h % b > 0) + h * (w % a > 0)
cost = fill(tiles, 10) * m + cuts * c
print(cost)