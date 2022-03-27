#include <stdio.h>
int main(void){long long n,x,sum=0;int digits=0;printf("Enter non-negative integer: ");if(scanf("%lld",&n)!=1||n<0)return 1;x=n;do{digits++;x/=10;}while(x);x=n;do{int d=(int)(x%10);long long p=1;for(int i=0;i<digits;i++)p*=d;sum+=p;x/=10;}while(x);puts(sum==n?"Armstrong number":"Not an Armstrong number");return 0;}
