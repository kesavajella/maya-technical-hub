#include<stdio.h>
#include<math.h>
int main() {
    int x,y,z,a;
    scanf("%d%d%d",&x,&y,&z);
    a=pow(x,y);
    int b=a%z;
    printf("%d",b);
    return 0;
}
