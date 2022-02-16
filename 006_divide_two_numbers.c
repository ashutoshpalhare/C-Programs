#include <stdio.h>
int main(void) {
    double a, b;
    printf("Enter dividend and divisor: ");
    if (scanf("%lf %lf", &a, &b) != 2) return 1;
    if (b == 0) { puts("Division by zero is not allowed."); return 1; }
    printf("Quotient = %.2f\\n", a / b);
    return 0;
}
