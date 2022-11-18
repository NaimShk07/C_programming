#include <stdio.h>

int main()
{
       int a;
       printf("Enter number of subject:");
       scanf("%d", &a);

       int mark[a];
       char sub[a][50];
       int max_marks = 100;
       int total_ob = 0; // total obtain
       int max_total = max_marks * a;
       int percentage;

       //loops starts

       for (int i = 0; i < a; i++)
       {
              printf("Enter %d subject name:", i + 1);
              scanf("%s", sub[i]);
       }
       for (int i = 0; i < a; i++)
       {
              printf("Enter %s mark:", sub[i]);
              scanf("%d", &mark[i]);
       }
       printf("\nSubject\t\t|\tMax_marks\t|\tMarks_Obtain\n\n");

       for (int i = 0; i < a; i++)
       {
              printf("%s\t\t|\t%d\t\t|\t%d\n", sub[i], max_marks, mark[i]);
       }
       for (int i = 0; i < a; i++)
       {
              total_ob = mark[i] + total_ob;
       }

       //loops end

       percentage = total_ob / a;

       printf("\nTotal\t\t|\t%d\t\t|\t%d\n", max_total, total_ob);
       printf("Percentage is %d%%", percentage);

       return 0;
}