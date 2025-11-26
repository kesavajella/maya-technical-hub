#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int z;
    scanf("%d", &z);
    int count = 0;
    for(int i = 0; i < N; i++) {
        if(arr[i] == z) {
            count++;
        }
    }
    printf("%d
", count);
    return 0;
}
