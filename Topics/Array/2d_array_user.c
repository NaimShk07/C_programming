#include<stdio.h>

int main(){

       int marks[2][4];
       for (int i = 0; i < 4; i++)
       {
              printf("First student %d subject marks:",i+1);
              scanf("%d",&marks[0][i]);
       }
       for (int i = 0; i < 4; i++)
       {
              printf("second student %d subject marks:",i+1);
              scanf("%d",&marks[1][i]);
       }
       for (int i = 0; i < 2; i++)
       {
             for (int j = 0; j < 4; j++)
             {
              printf("%d\t",marks[i][j]);
             }
             printf("\n");
             
       }
       
       
return 0;
}