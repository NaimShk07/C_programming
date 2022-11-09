#include <stdio.h>


int main()
{

       int num[3] = {2, 3, 4};


       Table with do while loop 

       int i = 0;
       do
       {
              /* code */
              int j = 1;
              do
              {
                     printf("%d * %d = %d\n", num[i], j, num[i] * j);
                     j++;
              } while (j < 10);
              printf("\nend\n");
              i++;

       } while (i < 3);

       return 0;
}