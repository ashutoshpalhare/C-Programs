#include <stdio.h>
int main(void){long long n;int count=0;printf("Enter integer: ");if(scanf("%lld",&n)!=1)return 1;unsigned long long x=n<0?0ULL-(unsigned long long)n:(unsigned long long)n;do{count++;x/=10;}while(x);printf("Digits = %d\\n",count);return 0;}
