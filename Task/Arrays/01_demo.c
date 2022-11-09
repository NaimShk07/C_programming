#include <stdio.h>

int main()
{

       int num[5] = {1, 2, 3, 4, 5};

       // printf("%d", num);
       // printf("%d", num[0]);

       int i = 0;
       while (i < 5)
       {
              printf("%d\n", num[i]);
              i++;
       }

       return 0;
}