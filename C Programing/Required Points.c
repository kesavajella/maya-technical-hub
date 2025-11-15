#include<stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(b>=a) {
        int c=b/a;
        printf("%d",c);
    }
    else {
        printf("0");
    }
    return 0;
}
