#include <stdio.h>
int main(void){double base,result=1;int exp;printf("Enter base and integer exponent: ");if(scanf("%lf %d",&base,&exp)!=2)return 1;if(base==0&&exp<0){puts("Zero cannot have a negative exponent.");return 1;}int e=exp<0?-exp:exp;for(int i=0;i<e;i++)result*=base;if(exp<0)result=1/result;printf("Result = %.6g\\n",result);return 0;}
