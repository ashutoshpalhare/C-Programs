#include <stdio.h>
int main(void){int a[]={10,20,30,40,50};int *p=a;printf("First value: %d\\n",*p);p++;printf("After p++: %d\\n",*p);printf("Third element using *(p+1): %d\\n",*(p+1));printf("Elements: ");for(p=a;p<a+5;p++)printf("%d ",*p);puts("");return 0;}
