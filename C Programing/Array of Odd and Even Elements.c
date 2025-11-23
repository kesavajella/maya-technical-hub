#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N], odd[N], even[N];
    int oddCount = 0, evenCount = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 != 0) {
            odd[oddCount++] = arr[i];
        } else {
            even[evenCount++] = arr[i];
        }
    }
    for(int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    for(int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("
");
    return 0;
}
