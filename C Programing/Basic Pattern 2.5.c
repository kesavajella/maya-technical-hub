#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = N; i >= 1; i--) {
        for (int j = 0; j < N - i + 1; j++) {
            printf("%c ", 'A' + i - 1);
        }
        printf("
");
    }
    return 0;
}
