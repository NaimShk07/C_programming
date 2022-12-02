#include <stdio.h>

int main()
{

       FILE *fp3;
       fp3 = fopen("mytextfile.txt", "a");
       fputs("world", fp3);

       fclose(fp3);
       return 0;
}