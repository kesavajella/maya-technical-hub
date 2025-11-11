#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int x,y;
    float z;
    scanf("%d %d",&x,&y);
    z=sqrt(x*x+y*y);
    printf("%.2f",z);
    return 0;
}
