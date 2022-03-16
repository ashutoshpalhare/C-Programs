#include <stdio.h>
int main(void){int a,b;printf("Enter range (start end): ");if(scanf("%d %d",&a,&b)!=2||a>b)return 1;for(int n=a;n<=b;n++){int p=n>=2;for(int d=2;p&&d<=n/d;d++)if(n%d==0)p=0;if(p)printf("%d ",n);}puts("");return 0;}
