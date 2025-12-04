#include <stdio.h>
int main() {
    char s[10000];
    int count = 0;
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            count++;
        }
    }
    printf("%d
", count);
    return 0;
}
