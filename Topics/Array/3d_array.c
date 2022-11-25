#include <stdio.h>

int main()
{

       char arr[2][3][4] =
           {
               {{'a', 'b', 'c', 'd'},
                {'a', 'b', 'c', 'd'},
                {'a', 'b', 'c', 'd'}},
               {{'a', 'b', 'c', 'd'},
                {'a', 'b', 'c', 'd'},
                {'a', 'b', 'c', 'd'}}

           };
       for (int i = 0; i < 2; i++)
       {
              for (int j = 0; j < 3; j++)
              {
                     for (int k = 0; k < 4; k++)
                     {
                            printf("[%d][%d][%d] = %c\n", i, j, k, arr[i][j][k]);
                     }
                     printf("\n");
              }
       }

       return 0;
}