#include <stdio.h>
int main(void) {
    double a,b,c; printf("Enter three numbers: ");
    if(scanf("%lf %lf %lf",&a,&b,&c)!=3) return 1;
    double min=a; if(b<min) min=b; if(c<min) min=c;
    printf("Smallest = %.2f\\n",min); return 0;
}
