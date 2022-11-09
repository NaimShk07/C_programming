#include <stdio.h>


int main()
{

       int num[3] = {2, 3, 4};

       // Table with while loop

       int i = 0;
       while (i < 3)
       {

              int j=1;
              while (j <= 10)
              {
                     printf("%d * %d = %d\n", num[i], j, num[i] * j);
                     j++;
              }
              printf("\nend\n\n");
              i++;
       }

      

       return 0;
}