#include <stdio.h>
int main(void){int n;printf("Enter N: ");if(scanf("%d",&n)!=1||n<1)return 1;for(int i=2;i<=n;i+=2)printf("%d ",i);puts("");return 0;}
