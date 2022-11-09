#include <stdio.h>

main()
{
       char c, ans;

       printf("Welcome to kbc\n\n");
again:
       printf("This is your First question on your screen\n");
       printf("What is 2+2 ?\n");

       printf("a.4 \t");
       printf("b.6\n");
       printf("c.7\t");
       printf("d.8\n\n");
       printf("Which option you want to choose : ");

       fflush(stdin);
       scanf("%c", &ans);

       if (ans != 'a')
       {
              printf("\nYour answer is wrong try again!!\n\n");
              goto again;
       }
       if (ans == 'a')
       {
              printf("Well done!! A is a correct answer\n\n");
       }
again2:

       printf("This is your Second question on your screen\n");
       printf("What is 4/2 ?\n\n");

       printf("a.4 \t");
       printf("b.2\n");
       printf("c.7\t");
       printf("d.8\n");
       printf("\nWhich option you want to choose : ");

       fflush(stdin);
       scanf("%c", &ans);
       if (ans != 'b')
       {
              printf("\nYour answer is wrong try again!!\n\n");
              goto again2;
       }
       if (ans == 'b')
       {
              printf("\nWell done!! B is a correct answer\n\n");
       }
again3:

       printf("This is your Third question on your screen\n");
       printf("What is 4*2 ?\n\n");

       printf("a.4 \t");
       printf("b.2\n");
       printf("c.6\t");
       printf("d.8\n");
       printf("\nWhich option you want to choose : ");
       fflush(stdin);
       scanf("%c", &ans);
       if (ans != 'd')
       {
              printf("\nYour answer is wrong try again!!\n\n");
              goto again3;
       }
       if (ans == 'd')
       {
              printf("\nWell done!! C is a correct answer\n\n");
       }

again4:

       printf("This is your Fourth question on your screen\n");
       printf("What is 7-2 ?\n\n");

       printf("a.4 \t");
       printf("b.2\n");
       printf("c.6\t");
       printf("d.5\n");
       printf("\nWhich option you want to choose : ");

       fflush(stdin);
       scanf("%c", &ans);
       if (ans != 'd')
       {
              printf("\nYour answer is wrong try again!!\n\n");
              goto again4;
       }
       if (ans == 'd')
       {
              printf("\nWell done!! D is a correct answer\n\n");
       }
       printf("Congratulation!!!!!\nYou won nothing");
}