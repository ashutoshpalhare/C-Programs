#include <stdio.h>
int main(void){const char *filename="sample.txt";FILE *fp=fopen(filename,"w");if(!fp){perror("fopen");return 1;}fputs("Hello from C file handling!\\n",fp);fclose(fp);fp=fopen(filename,"r");if(!fp){perror("fopen");return 1;}char line[200];while(fgets(line,sizeof line,fp))fputs(line,stdout);fclose(fp);return 0;}
