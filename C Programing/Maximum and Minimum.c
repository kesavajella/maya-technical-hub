#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int found = 0;
    int minVal = 100000, maxVal = -1; 
    for(int i = 0; i < N; i++) {
        int count = 0;
        for(int j = 0; j < N; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count == arr[i]) {
            if(arr[i] < minVal) minVal = arr[i];
            if(arr[i] > maxVal) maxVal = arr[i];
            found = 1;
        }
    }
    if(found) {
        printf("%d %d
", minVal, maxVal);
    } else {
        printf("-1
");
    }
    return 0;
}
