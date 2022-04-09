#include <stdio.h>
struct Student{int roll;char name[50];float marks;};
int main(void){struct Student s;printf("Enter roll, name (one word), marks: ");if(scanf("%d %49s %f",&s.roll,s.name,&s.marks)!=3)return 1;printf("\\nStudent\\nRoll: %d\\nName: %s\\nMarks: %.2f\\n",s.roll,s.name,s.marks);return 0;}
