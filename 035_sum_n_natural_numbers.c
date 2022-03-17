#include <stdio.h>
int main(void){long long n;printf("Enter N: ");if(scanf("%lld",&n)!=1||n<0)return 1;printf("Sum = %lld\\n",n*(n+1)/2);return 0;}
