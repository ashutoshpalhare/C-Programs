#include <stdio.h>
int main(void){int a[100],n,key,pos=-1;printf("Size (1-100): ");if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;printf("Search value: ");if(scanf("%d",&key)!=1)return 1;for(int i=0;i<n;i++)if(a[i]==key){pos=i;break;}if(pos>=0)printf("Found at index %d\\n",pos);else puts("Not found");return 0;}
