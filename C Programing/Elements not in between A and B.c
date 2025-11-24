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
    int found = 0;
    for(int i = 0; i < N; i++) {
        if(arr[i] < A || arr[i] > B) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if(!found) {
        printf("-1");
    }
    printf("
");
    return 0;
}
