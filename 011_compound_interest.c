#include <stdio.h>
#include <math.h>
int main(void) {
    double p, r, t, amount;
    int n;
    printf("Enter principal, annual rate (%%), years, compounds/year: ");
    if (scanf("%lf %lf %lf %d", &p, &r, &t, &n) != 4 || n <= 0 || t < 0) return 1;
    amount = p * pow(1.0 + r / (100.0 * n), n * t);
    printf("Amount = %.2f\\nCompound interest = %.2f\\n", amount, amount - p);
    return 0;
}
