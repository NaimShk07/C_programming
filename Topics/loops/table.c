#include <stdio.h>

main()
{

       int n, i;
       printf("Enter a num for table");
       scanf("%d", &n);

       for (i = 1; i <= 10; i++)
       {
              printf("\n %d x %d = %d", n, i, n * i);
       }
}