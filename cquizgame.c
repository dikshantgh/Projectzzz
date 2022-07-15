//author : dikshant ghimire
//1. question answer using file
//user name unique
// score record in a file
//show high score too

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
struct user
{
    char username[20];
    int score;
}u,t;

int main()
     {
     system("COLOR 31");
    FILE *fu;
    FILE *fq;
    FILE *fo;
    FILE *fa;
    char temp_name[20];
     while(1){


    fq = fopen("questions.txt","r");
    fo = fopen("options.txt","r");
    fa = fopen("answers.txt","r");

    puts("\n\t\t\tWELCOME TO QUIZ GAME ARENA\n\t\t\t[created by BIM I Semester HSMSS]");
    printf("___________________________________________________________________________________\n");
    puts("1. PLAY GAME\n2. Display all scores \n3. Exit");
    int choice;
    puts("enter your choice:");
    scanf("%d",&choice);
    //choice=getchar();
    char store[500];
    char ans;
    char correct_answer;
    int counter=0;
    fflush(stdin);

    switch(choice)
     {

    case 1:
            Label1:
            puts("enter your username.:");
            gets(temp_name);
            fu = fopen("score.txt","rb");
            while(fread(&u,sizeof(u),1,fu))
            {
                if((strcasecmp(temp_name,u.username))==0){
                    puts("This name already taken!!!Choose new name");
                    goto Label1;}
                else{
                    strcpy(u.username,temp_name);
                    u.score =0;}
             }
                fclose(fu);
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
                printf("\nCorrect!!  %c\n",2);
                counter++;
                u.score++;
                }
            else{


                puts("\nWrong !! Try next time\n");
                break;}

            }
            printf("Your score is %d", u.score);
            fu = fopen("score.txt","ab");
            fwrite(&u, sizeof(u),1,fu);
            fclose(fq);
            fclose(fo);
            fclose(fa);
            fclose(fu);
            break;

        case 2:
            fu = fopen("score.txt","rb");
            puts("UserName\t\tScore\n--------------------------------------");
            while(fread(&u,sizeof(u),1,fu))
            {
                printf("%s\t\t\t%d\n",u.username,u.score);
            }
            fclose(fu);
            break;

        case 3:
            puts("Exiting..............!!");
            exit(0);
            break;
        default:
            puts("Invalid Choice.. Try again");
     }
     }
     return 0;
     }
