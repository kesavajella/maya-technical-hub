#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int A, B;
    scanf("%d %d", &A, &B);
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    int sum = 0;
    for(int i = 0; i < N; i++) {
        if(arr[i] < A || arr[i] > B) {
            sum += arr[i];
        }
    }
    printf("%d
", sum);
    return 0;
}
