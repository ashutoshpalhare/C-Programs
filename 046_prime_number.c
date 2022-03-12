#include <stdio.h>
int main(void){int n,prime=1;printf("Enter integer: ");if(scanf("%d",&n)!=1)return 1;if(n<2)prime=0;for(int i=2;prime&&i<=n/i;i++)if(n%i==0)prime=0;puts(prime?"Prime number":"Not a prime number");return 0;}
