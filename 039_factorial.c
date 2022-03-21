#include <stdio.h>
int main(void){int n;unsigned long long f=1;printf("Enter N (0-20): ");if(scanf("%d",&n)!=1||n<0||n>20)return 1;for(int i=2;i<=n;i++)f*=i;printf("%d! = %llu\\n",n,f);return 0;}
