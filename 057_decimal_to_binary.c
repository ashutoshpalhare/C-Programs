#include <stdio.h>
int main(void){unsigned int n;int bits[32],i=0;printf("Enter non-negative integer: ");if(scanf("%u",&n)!=1)return 1;if(n==0){puts("Binary = 0");return 0;}while(n){bits[i++]=n%2;n/=2;}printf("Binary = ");while(i)printf("%d",bits[--i]);puts("");return 0;}
