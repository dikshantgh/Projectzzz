//author : dikshant ghimire
//1. question answer using file
//user name unique
// score record in a file
//show high score too

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int main()
     {
     system("COLOR 31");

    FILE *fq;
    FILE *fo;
    FILE *fa;
    fq = fopen("questions.txt","r");
    fo = fopen("options.txt","r");
    fa = fopen("answers.txt","r");

    puts("\n\t\tWELCOME TO QUIZ Game\n\t\t[created by BIM I Semester HSMSS]");
    puts("-------------------------------------------------------------------");
    puts("1. PLAY GAME\n2. Display all scores \n3. Exit");
    int choice;
    puts("enter your choice:");
    scanf("%d",&choice);
    char store[500];
    char ans;
    char correct_answer;
    fflush(stdin);
    switch(choice)
     {

    case 1:
        while(fgets(store,sizeof(store),fq))
        {
            fflush(stdin);
            printf("%s", store);
            fgets(store,sizeof(store),fo);
            printf("%s", store);
            puts("Your answer:");
            scanf("%c",&ans);
            fscanf(fa,"%c",&correct_answer);
            printf("--%c--",correct_answer);
            if(correct_answer==ans)
                puts("correct!!");
            else
                puts("wrong");
        }
            fclose(fq);
            break;
        }

     return 0;
     }
