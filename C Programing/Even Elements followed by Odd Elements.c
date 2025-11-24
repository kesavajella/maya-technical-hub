#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N], even[N], odd[N];
    int evenCount = 0, oddCount = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }
    for(int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    for(int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("
");
    return 0;
}
