#include <stdio.h>
int main(void) {
    double principal, rate, time;
    printf("Enter principal, annual rate (%%), and time (years): ");
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) return 1;
    printf("Simple interest = %.2f\\n", principal * rate * time / 100.0);
    return 0;
}
