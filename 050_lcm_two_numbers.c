#include <stdio.h>
int main(void){long long a,b,x,y;printf("Enter two integers: ");if(scanf("%lld %lld",&a,&b)!=2)return 1;x=a<0?-a:a;y=b<0?-b:b;long long m=x,n=y;while(n){long long t=n;n=m%n;m=t;}if(x==0||y==0)puts("LCM = 0");else printf("LCM = %lld\\n",(x/m)*y);return 0;}
