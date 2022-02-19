#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    /* XOR swap avoids arithmetic overflow. */
    a ^= b; b ^= a; a ^= b;
    printf("After swapping: a = %d, b = %d\\n", a, b);
    return 0;
}
