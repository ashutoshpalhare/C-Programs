#include <stdio.h>
int main(void){long long n;unsigned long long product=1;printf("Enter integer: ");if(scanf("%lld",&n)!=1)return 1;unsigned long long x=n<0?0ULL-(unsigned long long)n:(unsigned long long)n;do{product*=x%10;x/=10;}while(x);printf("Product of digits = %llu\\n",product);return 0;}
