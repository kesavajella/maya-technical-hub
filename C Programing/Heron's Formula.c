#include<stdio.h>
#include<math.h>
int main() {
    double a,b,c,s,f;
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/2;
    f=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.4lf ",f);
}
