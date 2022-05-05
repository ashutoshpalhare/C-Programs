#include <stdio.h>
int main(void){char src[200],dst[200];int i=0;printf("Enter a line: ");if(!fgets(src,sizeof src,stdin))return 1;while(src[i]&&i<199){dst[i]=src[i];i++;}dst[i]='\\0';printf("Copied string: %s",dst);return 0;}
