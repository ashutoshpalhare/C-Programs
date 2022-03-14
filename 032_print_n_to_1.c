#include <stdio.h>
int main(void){int n;printf("Enter N: ");if(scanf("%d",&n)!=1||n<1)return 1;for(int i=n;i>=1;i--)printf("%d ",i);puts("");return 0;}
