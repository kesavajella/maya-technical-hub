#include <stdio.h>
#include <string.h>
void ToLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}
int main() {
    char str[10000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "
")] = 0; 
    ToLowerCase(str);
    printf("%s
", str);
    return 0;
}
