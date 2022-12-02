#include <stdio.h>

int main()
{

       FILE *fp2;
       char temp[10];

       fp2=fopen("mytextfile.txt", "r");

       fgets(temp,10,fp2);
       printf("%s",temp);



       fclose(fp2);

       return 0;
}