#include <stdio.h>

int main()
{
       int c; // c=choice
       int q; // q=quatity
       int a; // a=amount


       int pa = 0, ba = 0, da = 0, ia = 0, total;
       /* pa=pizza_amount ba=burger_amount etc.
       i created this seperate amount of product because of total amount at the end.&*/


       char temp; // temp for yes or no

again:

       for (int i = 0; i <= 5; i++) // This loop is for ***** Menu *****
       {
              printf("-");
       }
       printf(" Menu ");
       for (int i = 0; i <= 5; i++)
       {
              printf("-");
       }
       printf("\n1.Pizza \tprice = 180rs/pcs"); // content of menu:product and price
       printf("\n2.Burger \tprice = 100rs/pcs");
       printf("\n3.Dosa \t\tprice = 120rs/pcs");
       printf("\n4.Idli \t\tprice = 50rs/pcs");
       printf("\nPlease enter your choice : ");
       scanf("%d", &c);

       if (c == 1)
       {
              printf("\nYou have selected pizza.");
              printf("\nEnter your quantity : ");
              scanf("%d", &q);
              pa = q * 180;                      // 180 is a price of pizza,and mutiply by quatity.
              printf("\nAmount = %d", pa);
              total = pa + ba + da + ia;                // This is for the total amount at the end.
              printf("\nDo want to place more order ?enter y or n : "); // for more order yes or no.
              fflush(stdin);
              scanf("%c", &temp);

              if (temp == 'y')
              {
                     goto again;
                     // if a customer enter yes,then this whole process will repeat by goto statement.
              }
              else
              {
                     printf("\nYour Total Amount : %d\n", total);
                     // if a customer enter no then it will simply show them their total amount.
              }
       }
       else if (c == 2)
       {
              printf("\nYou have selected burger.");
              printf("\nEnter your quantity : ");
              scanf("%d", &q);
              ba = q * 100; // 100 is a price of burger.
              printf("\nAmount = %d", ba);
              total = pa + ba + da + ia;
              printf("\nDo want to place more order ?enter y or n : ");
              fflush(stdin);
              scanf("%c", &temp);
              if (temp == 'y')
              {
                     goto again;
              }
              else
              {
                     printf("\nYour Total Amount : %d\n", total);
              }
       }
       else if (c == 3)
       {
              printf("\nYou have selected dosa.");
              printf("\nEnter your quantity : ");
              scanf("%d", &q);
              da = q * 120; // 120 is a price of dosa.
              printf("\nAmount = %d", da);
              total = pa + ba + da + ia;
              printf("\nDo want to place more order ?enter y or n : ");
              fflush(stdin);
              scanf("%c", &temp);
              if (temp == 'y')
              {
                     goto again;
              }
              else
              {
                     printf("\nYour Total Amount : %d\n", total);
              }
       }
       else if (c == 4)
       {
              printf("\nYou have selected idli.");
              printf("\nEnter your quantity : ");
              scanf("%d", &q);
              ia = q * 50; // 50 is a price of idli.
              printf("\nAmount = %d", ia);
              total = pa + ba + da + ia;
              printf("\nDo want to place more order ?enter y or n : ");
              fflush(stdin);
              scanf("%c", &temp);
              if (temp == 'y')
              {
                     goto again;
              }
              else
              {
                     printf("\nYour Total Amount : %d\n", total);
              }
       }
       else
       {
              printf("Enter a valid choice.");//by any chance if a customer enters wrong product number.
       }
       return 0;
}