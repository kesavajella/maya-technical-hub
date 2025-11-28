#include <stdio.h>

int main() {
    char str[10000];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    if (str[count - 1] == '
') {
        count--;
    }
    printf("%d
", count);
    return 0;
}
