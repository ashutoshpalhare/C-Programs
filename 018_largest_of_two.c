#include <stdio.h>
int main(void) {
    double a,b; printf("Enter two numbers: ");
    if (scanf("%lf %lf",&a,&b)!=2) return 1;
    if(a>b) printf("Largest = %.2f\\n",a); else if(b>a) printf("Largest = %.2f\\n",b); else puts("Both are equal.");
    return 0;
}
