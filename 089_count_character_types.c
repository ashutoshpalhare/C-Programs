#include <stdio.h>
#include <ctype.h>
int main(void){char s[300];int v=0,c=0,d=0,sp=0;printf("Enter a line: ");if(!fgets(s,sizeof s,stdin))return 1;for(int i=0;s[i];i++){int x=(unsigned char)s[i];if(x=='\\n')continue;if(isdigit(x))d++;else if(isspace(x))sp++;else if(isalpha(x)){x=tolower(x);if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')v++;else c++;}}printf("Vowels: %d\\nConsonants: %d\\nDigits: %d\\nSpaces: %d\\n",v,c,d,sp);return 0;}
