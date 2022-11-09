#include <stdio.h>
int fact(int n)
{
       int fa = 1;
       if (n == 1)
       {
              return 1;
       }
       else
       {
              fa = n * fact(n - 1);
       }
       return fa;
}
main()
{
       int n;
       printf("Enter a number to find a factorial");
       scanf("%d", &n);

       printf("\nFactorial : %d", fact(n));

       return 0;
}