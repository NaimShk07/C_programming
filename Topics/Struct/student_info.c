#include <stdio.h>

int main()
{

       struct student
       {
              char name[100];
              int roll;
              int mark;
       };

       struct student info[4];
       // one.roll=23;
       // one.name="naim";
       // one.mark=100;
       // printf("%d\n",one.roll);
       // printf("%s\n",one.name);
       // printf("%d\n",one.mark);
       for (int i = 0; i < 4; i++)
       {
              printf("Enter %d student name: ", i + 1);
              scanf("%s", info[i].name);
              printf("Enter %d student roll num :", i + 1);
              scanf("%d", &info[i].roll);
              printf("Enter %d student mark num :", i + 1);
              scanf("%d", &info[i].mark);
       }
       for (int i = 0; i < 4; i++)
       {
              printf("\n%d student name is %s\n", i + 1, info[i].name);
              printf("%d student roll no is %d\n", i + 1, info[i].roll);
              printf("%d student marks no is %d\n", i + 1, info[i].mark);
       }

       return 0;
}