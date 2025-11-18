#include<stdio.h>
int main() {
    int t,s,b,y;
    scanf("%d%d%d",&t,&s,&b);
    y=2*t*s*b*512;
    int z=y/1024;
    printf("%d KB",z);
    return 0;
}
