#include <stdio.h>
int main(void) {
    double a,b,c; printf("Enter three numbers: ");
    if(scanf("%lf %lf %lf",&a,&b,&c)!=3) return 1;
    double max=a; if(b>max) max=b; if(c>max) max=c;
    printf("Largest = %.2f\\n",max); return 0;
}
