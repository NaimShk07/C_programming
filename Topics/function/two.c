

// 2.without return type with parameters
#include <stdio.h>
void add(int c, int d); 

main()
{
       int a, b;
       printf("Enter a : ");
       scanf("%d", &a);
       printf("Enter b : ");
       scanf("%d", &b);

       add(a, b); //this is parameters
       add(10, 20);
}
void add(int c, int d)
{
       int ans;
       ans = c + d;
       printf("\nAddition is %d", ans);
}