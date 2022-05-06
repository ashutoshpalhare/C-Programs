#include <stdio.h>
int main(void){char a[200],b[100];int i=0,j=0;printf("First line: ");if(!fgets(a,sizeof a,stdin))return 1;printf("Second line: ");if(!fgets(b,sizeof b,stdin))return 1;while(a[i]&&a[i]!='\\n')i++;a[i++]=' ';while(b[j]&&b[j]!='\\n'&&i<199)a[i++]=b[j++];a[i]='\\0';printf("Combined: %s\\n",a);return 0;}
