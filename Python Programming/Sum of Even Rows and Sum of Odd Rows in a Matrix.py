N, M = map(int, input().split())
even_row_sum = 0
odd_row_sum = 0
for i in range(N):
    row = list(map(int, input().split()))
    if i % 2 == 0: 
        even_row_sum += sum(row)
    else:  
        odd_row_sum += sum(row)
print(even_row_sum, odd_row_sum)
