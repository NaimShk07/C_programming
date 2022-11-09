#include <stdio.h>

int main()
{

       int numbers[4] = {5, 4, 3, 6};

       //This horizontal table with while loop

       int j = 1;
       while (j < 10)
       {
              int i = 0;
              while (i < 4)
              {
                     printf("%d * %d = %d\t", numbers[i], j, numbers[i] * j);
                     i++;
              }
              printf("\n");
              j++;
       }

       return 0;
}