board=[]
count = 0
#inputs = [input() for i in range(9)]
for i in range(9):
    sum1 = 0
    inputs = list(map(int,input().split()))
    sum1 = sum([1 for i in inputs if i > 0])
    count += sum1
    board.append(inputs)

b = tuple(board)
print(count)
for i in range(9):
    for j in range(9):
        if (b[i][j]>0):
            print(i,j,b[i][j])
            

