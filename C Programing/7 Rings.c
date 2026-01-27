#include<stdio.h>
int main() {
    int a,x,y;
    scanf("%d%d",&x,&y);
    a=x*y;
    if(a>=10000 &&  a<=99999){
        printf("YES");
    }
    else {
        printf("NO");
    }
}
