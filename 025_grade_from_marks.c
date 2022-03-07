#include <stdio.h>
int main(void) {
    float marks; printf("Enter marks (0-100): ");
    if(scanf("%f",&marks)!=1 || marks<0 || marks>100) { puts("Invalid marks."); return 1; }
    if(marks>=90) puts("Grade A"); else if(marks>=80) puts("Grade B");
    else if(marks>=70) puts("Grade C"); else if(marks>=60) puts("Grade D");
    else if(marks>=40) puts("Grade E"); else puts("Grade F");
    return 0;
}
