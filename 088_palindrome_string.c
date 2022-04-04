#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void){char s[200];if(!fgets(s,sizeof s,stdin))return 1;int l=0,r=(int)strlen(s)-1;if(r>=0&&s[r]=='\\n')r--;while(l<r){while(l<r&&!isalnum((unsigned char)s[l]))l++;while(l<r&&!isalnum((unsigned char)s[r]))r--;if(tolower((unsigned char)s[l])!=tolower((unsigned char)s[r])){puts("Not a palindrome");return 0;}l++;r--;}puts("Palindrome");return 0;}
