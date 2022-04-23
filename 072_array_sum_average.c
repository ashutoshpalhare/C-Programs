#include <stdio.h>
int main(void){double a[100],sum=0;int n;printf("Size (1-100): ");if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++){if(scanf("%lf",&a[i])!=1)return 1;sum+=a[i];}printf("Sum = %.2f\\nAverage = %.2f\\n",sum,sum/n);return 0;}
