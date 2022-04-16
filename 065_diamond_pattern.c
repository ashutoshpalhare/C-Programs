#include <stdio.h>
int main(void){int n;printf("Half-height: ");if(scanf("%d",&n)!=1||n<1||n>25)return 1;for(int i=1;i<=n;i++){for(int s=0;s<n-i;s++)printf(" ");for(int j=0;j<2*i-1;j++)printf("*");puts("");}for(int i=n-1;i>=1;i--){for(int s=0;s<n-i;s++)printf(" ");for(int j=0;j<2*i-1;j++)printf("*");puts("");}return 0;}
