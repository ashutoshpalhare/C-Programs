#include <stdio.h>
int main(void){long long n,rev=0;printf("Enter integer: ");if(scanf("%lld",&n)!=1)return 1;long long x=n;while(x){int d=(int)(x%10);if(rev>922337203685477580LL||rev< -922337203685477580LL){puts("Reversed value may overflow.");return 1;}rev=rev*10+d;x/=10;}printf("Reverse = %lld\\n",rev);return 0;}
