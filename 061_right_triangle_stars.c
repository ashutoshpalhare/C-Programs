#include <stdio.h>
int main(void){int n;printf("Rows: ");if(scanf("%d",&n)!=1||n<1||n>50)return 1;for(int i=1;i<=n;i++){for(int j=1;j<=i;j++)printf("* ");puts("");}return 0;}
