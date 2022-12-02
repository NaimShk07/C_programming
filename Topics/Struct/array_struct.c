#include <stdio.h>

int main()
{

       struct marksheet
       {
              char name[10];
              int roll;
              char subject[2][10];
              int max_marks;
              int obtain_mark[2];
              int total_obt_mark;
       };
       struct marksheet student[2];
       for (int i = 0; i < 2; i++)
       {
              printf("Enter %d student name :", i + 1);
              scanf("%s", student[i].name);

              printf("Enter %d student roll :", i + 1);
              scanf("%d", &student[i].roll);

              for (int j = 0; j < 2; j++)
              {
                     printf("Enter %d student %d subject name : ", i + 1, j + 1);
                     scanf("%s", student[i].subject[j]);
              }
              for (int k = 0; k < 2; k++)
              {
                     printf("Enter %s marks ", student[i].subject[k]);
                     scanf("%d", &student[i].obtain_mark[k]);
              }
              printf("\n");
       }
       for (int i = 0; i < 2; i++)
       {
              printf("%d student name is %s\n", i + 1, student[i].name);

              printf("%d student roll number is %d\n", i + 1, student[i].roll);

              for (int j = 0; j < 2; j++)
              {
                     printf("%d student %s marks is %d \n", i + 1, student[i].subject[j], student[i].obtain_mark[j]);
              }
              printf("\n");
       }
       int max_marks = 100;

       int temp;
       printf("Enter a roll no to see result");
       scanf("%d", &temp);
       for (int i = 0; i < 2; i++)
       {
              if (student[i].roll == temp)
              {
                     for (int j = 0; j < 2; j++)
                     {
                            // for (int k = 0; k < 2; k++)
                            // {
                                   printf("%s\t\t|\t%d\t\t|\t%d\n", student[i].subject[k], max_marks, student[i].obtain_mark[k]);
                            // }
                     }
                     // for (int i = 0; i < a; i++)
                     // {
                     //        // total_ob = mark[i] + total_ob;
                     // }

                    
              }
             
       }

       return 0;
}