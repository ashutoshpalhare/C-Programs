#include <stdio.h>
void swap(int *a,int *b){int t=*a;*a=*b;*b=t;}
int main(void){int a,b;printf("Enter two integers: ");if(scanf("%d %d",&a,&b)!=2)return 1;swap(&a,&b);printf("After swap: %d %d\\n",a,b);return 0;}
