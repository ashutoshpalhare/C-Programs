#include <stdio.h>
int main(void){char s[300];int freq[256]={0};printf("Enter a line: ");if(!fgets(s,sizeof s,stdin))return 1;for(int i=0;s[i]&&s[i]!='\\n';i++)freq[(unsigned char)s[i]]++;for(int i=0;i<256;i++)if(freq[i])printf("'%c' : %d\\n",(i>=32&&i<127)?i:'?',freq[i]);return 0;}
