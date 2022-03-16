#include <stdio.h>
int main(void){int n,sum=0;printf("Enter positive integer: ");if(scanf("%d",&n)!=1||n<1)return 1;for(int i=1;i<=n/2;i++)if(n%i==0)sum+=i;puts(sum==n?"Perfect number":"Not a perfect number");return 0;}
