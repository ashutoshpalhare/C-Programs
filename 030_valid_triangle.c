#include <stdio.h>
int main(void) {
    double a,b,c; printf("Enter three side lengths: ");
    if(scanf("%lf %lf %lf",&a,&b,&c)!=3 || a<=0 || b<=0 || c<=0) return 1;
    puts(a+b>c && a+c>b && b+c>a ? "Valid triangle" : "Invalid triangle");
    return 0;
}
