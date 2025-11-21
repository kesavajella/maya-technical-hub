#include <stdio.h>
int main() {
    char s[1005];
    fgets(s, sizeof(s), stdin);
    char max_char = s[0];
    int i = 1;
    while (s[i] != '\0' && s[i] != '
') {
        if (s[i] > max_char) {
            max_char = s[i];
        }
        i++;
    }
    printf("%c
", max_char);
    return 0;
}
