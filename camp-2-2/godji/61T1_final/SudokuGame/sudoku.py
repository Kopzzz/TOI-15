n = eval(input())
board = ([0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0],
         [0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0],
         [0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0])

for i in range(n):
    x,y,v = map(int,input().split())
    board[x][y] = v

for i in range(9):
    for j in range(9):
        print(board[i][j],end=" ")
    print()

