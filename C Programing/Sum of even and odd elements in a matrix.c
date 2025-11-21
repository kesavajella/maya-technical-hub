#include <stdio.h>
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int evenSum = 0, oddSum = 0;
    int num;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &num);
            if(num % 2 == 0)
                evenSum += num;
            else
                oddSum += num;
        }
    }
    printf("%d %d
", evenSum, oddSum);
    return 0;
}
