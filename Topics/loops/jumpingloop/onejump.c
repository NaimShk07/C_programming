#include <stdio.h>

main()
{

       int i;
       for (i = 1; i <= 10; i++)
       {
              if (i == 7)
              {
                     // break; //switch and loop
                     continue;  //loop
                     //goto linear execution
              }
              printf("\ni=%d", i);
       }
}