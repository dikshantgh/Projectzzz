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
    int counter=0;
    fflush(stdin);
    switch(choice)
     {

    case 1:

            while(counter<3){
            puts("------------------------");
            fgets(store,sizeof(store),fq);
            printf("%s",store);
            fgets(store,sizeof(store),fo);
            printf("\n%s",store);
            puts("Your ans:");
            scanf("%c",&ans);
            correct_answer=getc(fa);
            fflush(stdin);
            if(correct_answer==ans){
                puts("Correct!!");
                counter++;}
            else{
                puts("Wrong !! Try next time");
                break;}
            }
            fclose(fq);
            fclose(fo);
            fclose(fa);
            break;

     }
     return 0;
     }
