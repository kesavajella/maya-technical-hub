#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int val = i % 2;  // 0 for even rows, 1 for odd rows
        for (int j = 0; j < N; j++) {
            printf("%d ", val);
        }
        printf("
");
    }

    return 0;
}
