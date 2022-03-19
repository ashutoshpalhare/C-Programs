#include <stdio.h>
int main(void){int n;long long sum=0;printf("Enter N: ");if(scanf("%d",&n)!=1||n<0)return 1;for(int i=1;i<=n;i+=2)sum+=i;printf("Sum = %lld\\n",sum);return 0;}
