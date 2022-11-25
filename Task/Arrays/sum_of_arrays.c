#include <stdio.h>

int main()
{
       // sum of single array

       // int array[10] = {2, 3, 4, 5, 6, 7, 8, 9, 1, 3};
       // int total=0;
       //  for (int i = 0; i < 10; i++)
       // {
       //        total=array[i]+total;
       // }
       // printf("Sum of array is %d",total);

       //*********************************************

       // sum of 2d array
       
       int total_2 = 0;
       int arr[2][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 2}, {7, 8, 9, 4, 5, 6, 11, 36, 4, 5}};

       for (int i = 0; i < 2; i++)
       {
              for (int j = 0; j < 10; j++)
              {
                     total_2 = arr[i][j] + total_2;
              }
       }
       printf("Sum of 2d array is %d",total_2);

       return 0;
}