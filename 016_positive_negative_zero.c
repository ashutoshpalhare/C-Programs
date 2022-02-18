#include <stdio.h>
int main(void) {
    double n; printf("Enter a number: ");
    if (scanf("%lf", &n) != 1) return 1;
    if (n > 0) puts("Positive"); else if (n < 0) puts("Negative"); else puts("Zero");
    return 0;
}
