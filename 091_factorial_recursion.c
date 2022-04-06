#include <stdio.h>
unsigned long long factorial(int n){return n<=1?1:(unsigned long long)n*factorial(n-1);}
int main(void){int n;printf("Enter N (0-20): ");if(scanf("%d",&n)!=1||n<0||n>20)return 1;printf("%d! = %llu\\n",n,factorial(n));return 0;}
