#include <stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int participants[2000];
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &participants[i]);
    }
    for (int i = 0; i < n; i++) {
        if (participants[i] <= 5 - k) {
            count++;
        }
    }
    printf("%d
", count / 3);
    return 0;
}
