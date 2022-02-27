#include <stdio.h>
int main(void) {
    int n; printf("Enter an integer: "); if(scanf("%d",&n)!=1) return 1;
    puts(n%5==0 && n%11==0 ? "Divisible by both 5 and 11" : "Not divisible by both 5 and 11");
    return 0;
}
