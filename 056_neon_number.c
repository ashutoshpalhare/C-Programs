#include <stdio.h>
int main(void){int n,sum=0;printf("Enter non-negative integer: ");if(scanf("%d",&n)!=1||n<0)return 1;int sq=n*n,x=sq;while(x){sum+=x%10;x/=10;}puts(sum==n?"Neon number":"Not a Neon number");return 0;}
