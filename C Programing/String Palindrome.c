#include <stdio.h>
int stringLength(char str[]) {
// Editable code starts here
   //Complete this Funct
   int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int isPalindrome(char str[]) {
// Editable code starts here
    //Complete this Function
    int length = stringLength(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }
    return 1;
// Editable code ends here
}

int main() {
// Constrained code starts here
    char string[10000];
    scanf("%[^
]s", string);

// Constrained code ends here

    for (int i = 0; string[i]; i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 32; 
        }
    }
    if (isPalindrome(string)) {
        printf("Palindrome
");
    } else {
        printf("Not Palindrome
");
    }
    return 0;
}
