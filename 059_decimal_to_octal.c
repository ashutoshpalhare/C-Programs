#include <stdio.h>
int main(void){unsigned int n;int a[32],i=0;printf("Enter non-negative integer: ");if(scanf("%u",&n)!=1)return 1;if(!n){puts("Octal = 0");return 0;}while(n){a[i++]=n%8;n/=8;}printf("Octal = ");while(i)printf("%d",a[--i]);puts("");return 0;}
