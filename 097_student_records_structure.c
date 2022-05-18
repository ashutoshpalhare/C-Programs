#include <stdio.h>
struct Student{int roll;char name[50];float marks;};
int main(void){struct Student s[50];int n;printf("Number of students (1-50): ");if(scanf("%d",&n)!=1||n<1||n>50)return 1;for(int i=0;i<n;i++){printf("Student %d (roll name marks): ",i+1);if(scanf("%d %49s %f",&s[i].roll,s[i].name,&s[i].marks)!=3)return 1;}puts("\\nStudent records:");for(int i=0;i<n;i++)printf("%d | %s | %.2f\\n",s[i].roll,s[i].name,s[i].marks);return 0;}
