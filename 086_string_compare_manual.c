#include <stdio.h>
int main(void){char a[200],b[200];int i=0;printf("First string: ");if(!fgets(a,sizeof a,stdin))return 1;printf("Second string: ");if(!fgets(b,sizeof b,stdin))return 1;while(a[i]&&b[i]&&a[i]==b[i])i++;if(a[i]==b[i]||(a[i]=='\\n'&&b[i]=='\\n'))puts("Strings are equal");else puts("Strings are different");return 0;}
