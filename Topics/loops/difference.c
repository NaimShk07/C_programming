#include <stdio.h>

main()
{

       int i;
       // printf("Enter a number : ");
       // scanf("%d", &i);

       // while (i = !0)
       // {
       //        printf("I = %d", i);
       //        printf("Enter a number : ");
       //        scanf("%d", &i);
       // }
       // printf("You Entered zero");

       do
       {
              printf("Enter a number : \n");
              scanf("%d", &i);
              printf("I = %d \n", i);

       } while (i != 0);
       printf("You Entered zero");
}