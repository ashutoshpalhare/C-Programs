#include <stdio.h>
int main(void){int a[100],n;printf("Size (1-100): ");if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;for(int i=0;i<n/2;i++){int t=a[i];a[i]=a[n-1-i];a[n-1-i]=t;}for(int i=0;i<n;i++)printf("%d ",a[i]);puts("");return 0;}
