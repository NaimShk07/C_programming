#include <stdio.h>

int main()
{

       int s;
       int n;

       printf("How many items you want to add? ");
       scanf("%d", &s);

       int num[s];

       int i = 0;
       while (i < s)
       {
              printf("Add value %d: ", i + 1);
              scanf("%d", &n);
              num[i] = n;
              i++;
       }

       // int i = 0;
       int j=0;
       while (j < s)
       {
              printf("Value %d ", num[j]);
              printf("\n");
              j++;
       }

       return 0;
}