#include <stdio.h>
unsigned long long fib(int n){if(n<2)return (unsigned long long)n;return fib(n-1)+fib(n-2);}
int main(void){int n;printf("Terms (1-40): ");if(scanf("%d",&n)!=1||n<1||n>40)return 1;for(int i=0;i<n;i++)printf("%llu ",fib(i));puts("");return 0;}
