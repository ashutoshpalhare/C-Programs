#include <stdio.h>
int main(void){long long n;int sum=0;printf("Enter integer: ");if(scanf("%lld",&n)!=1)return 1;unsigned long long x=n<0?0ULL-(unsigned long long)n:(unsigned long long)n;while(x){sum+=(int)(x%10);x/=10;}printf("Sum of digits = %d\\n",sum);return 0;}
