#include <stdio.h>
int main(void){long long n,rev=0;printf("Enter non-negative integer: ");if(scanf("%lld",&n)!=1||n<0)return 1;long long x=n;while(x){rev=rev*10+x%10;x/=10;}puts(n==rev?"Palindrome number":"Not a palindrome number");return 0;}
