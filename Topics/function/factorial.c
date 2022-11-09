#include <stdio.h>

main()
{

       int a, fact = 1;
       printf("Enter a num");
       scanf("%d", &a);

       for (int i = 1; i <= a; i++)
       {
              fact = fact * i;
              printf("%d\n", fact);
       }
       printf("\n%d", fact);
}