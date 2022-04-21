#include <stdio.h>
int main(void){int n;printf("Rows (1-26): ");if(scanf("%d",&n)!=1||n<1||n>26)return 1;for(int i=1;i<=n;i++){for(int j=0;j<i;j++)printf("%c ",'A'+j);puts("");}return 0;}
