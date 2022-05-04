#include <stdio.h>
int main(void){char s[200];int n=0;printf("Enter a line: ");if(!fgets(s,sizeof s,stdin))return 1;while(s[n]&&s[n]!='\\n')n++;printf("Length = %d\\n",n);return 0;}
