#include <stdio.h>
#include <ctype.h>
int main(void) {
    int ch; printf("Enter an alphabet: "); ch=getchar();
    if(!isalpha((unsigned char)ch)) puts("Input is not an alphabet.");
    else { ch=tolower((unsigned char)ch); puts((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') ? "Vowel" : "Consonant"); }
    return 0;
}
