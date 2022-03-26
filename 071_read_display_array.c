#include <stdio.h>
int main(void){int a[100],n;printf("Array size (1-100): ");if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++){printf("a[%d] = ",i);if(scanf("%d",&a[i])!=1)return 1;}puts("Array elements:");for(int i=0;i<n;i++)printf("%d ",a[i]);puts("");return 0;}
