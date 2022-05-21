#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct Student{int roll;char name[50];float marks;};
int main(void){
    struct Student s[MAX];int count=0,choice;
    do{
        puts("\\n--- Student Management ---");
        puts("1. Add student\\n2. List students\\n3. Save and exit");
        printf("Choice: ");if(scanf("%d",&choice)!=1)break;
        if(choice==1){
            if(count==MAX){puts("Record limit reached.");continue;}
            printf("Roll, name (one word), marks: ");
            if(scanf("%d %49s %f",&s[count].roll,s[count].name,&s[count].marks)!=3){puts("Invalid input.");return 1;}
            count++;puts("Student added.");
        }else if(choice==2){
            if(!count)puts("No records yet.");
            for(int i=0;i<count;i++)printf("%d | %s | %.2f\\n",s[i].roll,s[i].name,s[i].marks);
        }else if(choice==3){
            FILE *fp=fopen("students.txt","w");
            if(!fp){perror("students.txt");return 1;}
            for(int i=0;i<count;i++)fprintf(fp,"%d %s %.2f\\n",s[i].roll,s[i].name,s[i].marks);
            fclose(fp);puts("Records saved to students.txt.");
        }else puts("Invalid choice.");
    }while(choice!=3);
    return 0;
}
