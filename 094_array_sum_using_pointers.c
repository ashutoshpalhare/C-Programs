#include <stdio.h>
int main(void){int a[100],n;long long sum=0;printf("Size (1-100): ");if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++)if(scanf("%d",a+i)!=1)return 1;for(int *p=a;p<a+n;p++)sum+=*p;printf("Sum = %lld\\n",sum);return 0;}
