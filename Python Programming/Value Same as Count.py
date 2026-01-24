def count_elements_equal_to_count(N, Arr):
    count = [0] * 10  # Since elements are from 1 to 9
    for num in Arr:
        count[num] += 1
    
    result = 0
    for i in range(1, 10):
        if count[i] == i:
            result += 1
            
    return result
N = int(input())
Arr = list(map(int, input().split()))

print(count_elements_equal_to_count(N, Arr))
