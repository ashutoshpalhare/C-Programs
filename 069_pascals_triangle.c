#include <stdio.h>
int main(void){int n;printf("Rows (1-20): ");if(scanf("%d",&n)!=1||n<1||n>20)return 1;for(int i=0;i<n;i++){unsigned long long c=1;for(int s=0;s<n-i-1;s++)printf(" ");for(int j=0;j<=i;j++){printf("%llu ",c);c=c*(i-j)/(j+1);}puts("");}return 0;}
