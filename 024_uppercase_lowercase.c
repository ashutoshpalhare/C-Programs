#include <stdio.h>
#include <ctype.h>
int main(void) {
    int ch; printf("Enter a character: "); ch=getchar();
    if(isupper((unsigned char)ch)) puts("Uppercase");
    else if(islower((unsigned char)ch)) puts("Lowercase");
    else puts("Not an alphabetic letter");
    return 0;
}
