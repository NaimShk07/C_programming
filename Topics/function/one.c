// library function
// user define function

// 4 types of function

// 1.without return type without parameters/arguments.
#include <stdio.h>

void add(); // function declaration

main()
{
       add(); //function call
       add();
       add();
       add();
}
void add()//
{
       int a, b, ans;
       printf("\nEnter a : ");
       scanf("%d", &a);
       printf("\nEnter b : ");
       scanf("%d", &b);
       ans = a + b;
       printf("\nAddition is %d\n", ans);
}