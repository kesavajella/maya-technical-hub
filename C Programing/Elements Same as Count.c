#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N], visited[N];
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; 
    }
    int found = 0;
    for(int i = 0; i < N; i++) {
        if(visited[i] == 0) {
            int count = 1;
            for(int j = i + 1; j < N; j++) {
                if(arr[j] == arr[i]) {
                    count++;
                    visited[j] = 1;
                }
            }
            if(count == arr[i]) {
                printf("%d ", arr[i]);
                found = 1;
            }
        }
    }
    if(!found) {
        printf("-1");
    }
    printf("
");
    return 0;
}
