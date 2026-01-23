# Array Repetition Generator

def generate_repeated_array(n, arr):
    result = []
    for i in range(0, n, 2):
        x = arr[i]
        y = arr[i + 1]
        result.extend([x] * y)
    return result

# Input
n = int(input())
arr = list(map(int, input().split()))

# Output
print(' '.join(map(str, generate_repeated_array(n, arr))))
