#include <stdio.h>
int main() {
    char source[10000], destination[10000];
    fgets(source, sizeof(source), stdin);
    int i = 0;
    while (source[i] != '\0' && source[i] != '
') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; 

    printf("%s
", destination);
    
    return 0;
}
