#include<stdio.h>

int main(){

       struct info{
              char name[10];
              int roll_no;
              char subject_name[3][10];
              int mark_ob[3][10];

       };

       struct info student[4];
       student[0].name[10]="naim";
       printf("%s",student[0].name)

return 0;
}