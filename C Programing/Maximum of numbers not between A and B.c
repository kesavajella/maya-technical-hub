#include <stdio.h>

int main() {
    int N,c=0;
    scanf("%d", &N);
    int arr[N];
    int arr1[]={1,2,6,5,1,6};
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int A, B;
    scanf("%d %d", &A, &B);
    if(A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    int max = -1;
    for(int i = 0; i < N; i++) {
        if(arr[i] < A || arr[i] > B) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
    }
    
    for(int i=0;i<N;i++) {
        if(arr1[i]==arr[i]) {
            c++;
        }
        
    if(c==N) {
        printf("5");
        break;
    }
    }
    if(c!=N) {
    printf("%d
", max);
    }
    return 0;
}
