// #include <stdio.h>

// main()
// {
//        int a, b, ans;
//        char n;
//        printf("Enter a : ");
//        scanf("%d", &a);
//        printf("Enter b : ");
//        scanf("%d", &b);

//        printf("\n Select the operation to perform");
//        printf("+ for addition \n - for subtraction \n * for multiplication \n / for Division\n\n");
//        fflush(stdin);
//        scanf("%c", &n);

//        switch (n)
//        {
//        case '+':
//               printf("\n Addition = %d", a + b);
//               break;

//        case '-':
//               printf("\n Substraction = %d", a - b);
//               break;

//        case '*':
//               printf("\n Multiplication = %d", a * b);
//               break;

//        case '/':
//               printf("\n Division = %d", a / b);
//               break;

//        default:
//               printf("Enter a valid input!!!");
//               break;
//        }
// }

// Goto

#include <stdio.h>

main()
{
       int a, b, ans;
       char n, c;

again:
       printf("Enter a : ");
       scanf("%d", &a);
       printf("Enter b : ");
       scanf("%d", &b);

       printf("\n Select the operation to perform");
       printf("+ for addition \n - for subtraction \n * for multiplication \n / for Division\n\n");
       fflush(stdin);
       scanf("%c", &n);

       switch (n)
       {
       case '+':
              printf("\n Addition = %d", a + b);
              break;

       case '-':
              printf("\n Substraction = %d", a - b);
              break;

       case '*':
              printf("\n Multiplication = %d", a * b);
              break;

       case '/':
              printf("\n Division = %d", a / b);
              break;

       default:
              printf("Enter a valid input!!!");
              break;
       }

       
       printf("Enter y to restart and n to stop");


       fflush(stdin);


       scanf("%c", &c);
       if (c == 'y')
       {
              goto again;
       }
       printf("Thank You!!");
}