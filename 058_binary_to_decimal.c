#include <stdio.h>
int main(void){unsigned long long b,place=1,decimal=0;printf("Enter binary digits: ");if(scanf("%llu",&b)!=1)return 1;while(b){int d=b%10;if(d>1){puts("Invalid binary number.");return 1;}decimal+=d*place;place*=2;b/=10;}printf("Decimal = %llu\\n",decimal);return 0;}
