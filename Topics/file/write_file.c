#include<stdio.h>

int main(){

       FILE *fp;

       fp=fopen("mytextfile.txt","w");
       fputs("hello",fp);

       fclose(fp);
return 0;
}