#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    int Maxp, Maxw, N;
    scanf("%d %d", &Maxp, &Maxw);
    scanf("%d", &N);
    int *weights = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &weights[i]);
    }
    qsort(weights, N, sizeof(int), compare);
    int count = 0, totalWeight = 0;
    for (int i = 0; i < N; i++) {
        if (count < Maxp && totalWeight + weights[i] <= Maxw) {
            totalWeight += weights[i];
            count++;
        } else {
            break;
        }
    }
    printf("%d
", count);
    free(weights);
    return 0;
}
