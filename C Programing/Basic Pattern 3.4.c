#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char ch = 'A' + N - 1;

    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
        }
        printf("
");
        ch--; 
    }

    return 0;
}
