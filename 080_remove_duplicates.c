#include <stdio.h>
int main(void){int a[100],n;printf("Size (1-100): ");if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;int k=0;for(int i=0;i<n;i++){int seen=0;for(int j=0;j<k;j++)if(a[j]==a[i])seen=1;if(!seen)a[k++]=a[i];}printf("Without duplicates: ");for(int i=0;i<k;i++)printf("%d ",a[i]);puts("");return 0;}
