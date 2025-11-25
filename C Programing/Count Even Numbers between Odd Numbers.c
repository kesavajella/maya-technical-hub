#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 1; i < N - 1; i++) {
        if(arr[i] % 2 == 0 && arr[i-1] % 2 != 0 && arr[i+1] % 2 != 0) {
            count++;
        }
    }
    printf("%d
", count);
    return 0;
}
