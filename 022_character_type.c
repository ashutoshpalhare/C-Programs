#include <stdio.h>
#include <ctype.h>
int main(void) {
    int ch; printf("Enter one character: "); ch=getchar();
    if(isalpha((unsigned char)ch)) puts("Alphabet");
    else if(isdigit((unsigned char)ch)) puts("Digit");
    else puts("Special character or whitespace");
    return 0;
}
