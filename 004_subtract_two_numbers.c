#include <stdio.h>
int main(void) {
    double a, b;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &a, &b) != 2) return 1;
    printf("Difference = %.2f\\n", a - b);
    return 0;
}
