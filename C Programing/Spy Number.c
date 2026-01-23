#include<stdio.h>
int main() {
    int a,b,s=0,p=1;
    scanf("%d",&a);
    while(a>0) {
        b=a%10;
        s+=b;
        p*=b;
        a/=10;
    }
    if(s==p) {
        printf("Spy Number");
    }
    else {
        printf("Not Spy Number");
    }
}
