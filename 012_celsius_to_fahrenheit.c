#include <stdio.h>
int main(void) {
    double c;
    printf("Temperature in Celsius: ");
    if (scanf("%lf", &c) != 1) return 1;
    printf("Fahrenheit = %.2f\\n", c * 9.0 / 5.0 + 32.0);
    return 0;
}
