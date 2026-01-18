N = int(input())
matrixA = [list(map(int, input().split())) for _ in range(N)]
matrixB = [list(map(int, input().split())) for _ in range(N)]

result = [[abs(matrixA[i][j] - matrixB[i][j]) for j in range(N)] for i in range(N)]

for row in result:
    print(' '.join(map(str, row)))
