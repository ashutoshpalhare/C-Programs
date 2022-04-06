#include <stdio.h>
int main(void){int n,x,sum=0;printf("Enter positive integer: ");if(scanf("%d",&n)!=1||n<=0)return 1;x=n;while(x){sum+=x%10;x/=10;}puts(n%sum==0?"Harshad number":"Not a Harshad number");return 0;}
