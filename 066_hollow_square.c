#include <stdio.h>
int main(void){int n;printf("Side length: ");if(scanf("%d",&n)!=1||n<2||n>50)return 1;for(int i=1;i<=n;i++){for(int j=1;j<=n;j++)printf(i==1||i==n||j==1||j==n?"* ":"  ");puts("");}return 0;}
