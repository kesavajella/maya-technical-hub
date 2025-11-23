#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int i = 0, j = N - 1;
    while(i < j) {
        printf("%d %d ", arr[i], arr[j]);
        i++;
        j--;
    }
    if(i == j) {
        printf("%d 0", arr[i]);
    }
    printf("
");
    return 0;
}
