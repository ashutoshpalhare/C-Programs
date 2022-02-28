#include <stdio.h>
int main(void) {
    double n; printf("Enter a number: "); if(scanf("%lf",&n)!=1) return 1;
    if(n<0) n=-n; printf("Absolute value = %.2f\\n",n); return 0;
}
