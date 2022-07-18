// author : dikshant
//do my task bot
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>


int main()
{
    char user_input[1000];

    system("COLOR 31");
    printf("\n\t\t WELCOME THIS IS CHATBOT ARENA\n \t\t[created by BIM I Semester at HSMSS]\n");
    printf("___________________________________________________________________________________\n");
    puts("\nBot==>Hello there ! My name is HSM bot.\nWhat is your name?\n");
    printf("user ==>");
    gets(user_input);
    printf("\nbot ==> Hi %s .You can open applications using open command..\n",user_input);
    while(1)
    {

     printf("user ==> ");
     gets(user_input);
    puts("\n------------------------------------------\n");

     if(strcmp(user_input,"exit")==0)
     {

         printf("bot ==> ok byeeee\n");
         break;
     }
     else if(strcmp(user_input,"open chrome")==0)
     {
         printf("ok sir , opening chrome browser \n");
         system("start chrome");
     }
     else if(strcmp(user_input,"open notepad")==0)
     {
         printf("ok sir , opening notpad editor \n");
         system("start notepad");
     }
     else if(strcmp(user_input,"open cmd")==0)
     {
         printf("ok sir , opening cmd \n");
         system("start cmd");
     }
     else if(strcmp(user_input,"time")==0)
     {
         time_t s, val =1 ;
         struct tm* current_time;
         //time in second
         s = time(NULL);
         current_time = localtime(&s);
         //print time in minute
         //print hour and second
         printf("bot ==> %02d:%02d:%02d\n",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
//         time_t tm;
//         time(&tm);
//         printf("%s",ctime(&tm);
     }
     else if(strcmp(user_input,"open youtube")==0)
     {
        printf("ok sir , opening youtube \n");
        system("start http://youtube.com");
     }
     else if(strcmp(user_input,"open calculator")==0)
     {
        printf("Opening calculator!!");
        system("start calc");
     }
      else if(strcmp(user_input,"search")==0)
     {
        printf("eNTER WHAT YOU WANT TO SEARCH:");
        char word[50];
        gets(word);
        for(int i=0;word[i]!='\0';i++)
        {
            if(word[i]==' ')
                word[i]='+';
        }
        char url[]="start https://www.youtube.com/results?search_query=";
        strcat(url,word);
        system(url);
     }
     else
     {
         puts("bot ==> Command not found. Try Again !!!");
     }
    }
    return 0;
}






