def find_equilibrium_index(arr):
    total_sum = sum(arr)
    left_sum = 0
    
    for i in range(len(arr)):
        total_sum -= arr[i]
        if left_sum == total_sum:
            return i
        left_sum += arr[i]
    
    return -1

def main():
    T = int(input())
    for _ in range(T):
        N = int(input())
        arr = list(map(int, input().split()))
        print(find_equilibrium_index(arr))

if __name__ == "__main__":
    main()
