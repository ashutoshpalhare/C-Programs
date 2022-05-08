#include <stdio.h>
int main(void){char s[200];int n=0;printf("Enter a line: ");if(!fgets(s,sizeof s,stdin))return 1;while(s[n]&&s[n]!='\\n')n++;printf("Reversed: ");for(int i=n-1;i>=0;i--)putchar(s[i]);puts("");return 0;}
