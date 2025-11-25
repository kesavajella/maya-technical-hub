#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int isStrictlyEven = 1;
    for(int i = 0; i < N; i++) {
        if(arr[i] % 2 == 0) {
            if(i % 2 != 0) {
                isStrictlyEven = 0;
                break;
            }
        }
    }
    if(isStrictlyEven)
        printf("True
");
    else
        printf("False
");
    return 0;
}
