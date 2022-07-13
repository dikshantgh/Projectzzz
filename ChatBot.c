// ai chat bot in c programming
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
char user_input[];
int main()
{
    system("COLOR 31");
    printf("\n\t\t WELCOME THIS IS CHATBOT ARENA\n \t\t[created by BIM I Semester at HSMSS]\n");
    printf("___________________________________________________________________________________\n");
    while(1)
    {
    puts("\nBot==>Hello there !, my name is HSM bot.");
     printf("user ==> ");
     gets(user_input);
     if(strcmp(user_input,"exit")==0)
     {

         printf("bot ==> ok byy\n");
         break;
     }
     else if(strcmp(user_input,"hi")==0)
     {
         printf("bot ==> hi sir\n");
     }
     else if(strcmp(user_input,"open chrome")==0)
     {
         printf("ok sir , opeaning chrome browser \n");
         system("start chrome");
     }
     else if(strcmp(user_input,"open notepad")==0)
     {
         printf("ok sir , opeaning notpad editor \n");
         system("start notepad");
     }
     else if(strcmp(user_input,"open cmd")==0)
     {
         printf("ok sir , opeaning cmd \n");
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
     }
     else if(strcmp(user_input,"open youtube")==0)
     {
        printf("ok sir , opeaning youtube \n");
        system("start http://youtube.com");
     }
     else if(strcmp(user_input,"open calculator")==0)
     {
        printf("Opening calculator!!");
        system("start calc");
     }
      else if(strcmp(user_input,"search")==0)
     {
        printf("playing!!");
        system("start https://www.youtube.com/results?search_query=hello");
     }
    }
    return 0;
}






