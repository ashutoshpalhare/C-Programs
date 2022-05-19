#include <stdio.h>
#include <string.h>
union Data{int number;float decimal;char text[20];};
int main(void){union Data d;d.number=42;printf("Integer: %d\\n",d.number);d.decimal=3.14f;printf("Float: %.2f\\n",d.decimal);strcpy(d.text,"C Programming");printf("String: %s\\n",d.text);puts("A union shares the same memory among all members.");return 0;}
