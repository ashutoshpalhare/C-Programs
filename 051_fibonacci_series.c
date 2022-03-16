#include <stdio.h>
int main(void){int n;unsigned long long a=0,b=1;printf("Number of terms (1-93): ");if(scanf("%d",&n)!=1||n<1||n>93)return 1;for(int i=0;i<n;i++){printf("%llu ",a);unsigned long long c=a+b;a=b;b=c;}puts("");return 0;}
