#include <stdio.h>
int main(void){unsigned long long n,sq,p=1;printf("Enter non-negative integer: ");if(scanf("%llu",&n)!=1)return 1;sq=n*n;unsigned long long x=n;do{p*=10;x/=10;}while(x);puts(sq%p==n?"Automorphic number":"Not an automorphic number");return 0;}
