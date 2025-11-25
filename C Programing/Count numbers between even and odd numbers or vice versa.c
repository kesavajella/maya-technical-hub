#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 0; i < N - 2; i++) {
        int first = arr[i];
        int middle = arr[i + 1];
        int third = arr[i + 2];
        if ((first % 2 == 0 && third % 2 != 0) || (first % 2 != 0 && third % 2 == 0)) {
            count++;
        }
    }
    printf("%d
", count);
    return 0;
}
