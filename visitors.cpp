#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
struct visitor
{
    char name[100];
    char category[100];
    time_t tm ;

}v;

int main()

{
    puts("\nWELCOME TO VISITORS RECORD MANAGEMENT SYSTEM\n[created by BIM I Semester HSMSS]\n");
    system("COLOR F1");
    FILE *fp ;
    while(1){
    puts("1. Enter the record\n2.Search the record\n3.Display all records\n4.Exit\nEnter your choice:");
    int choice;
    scanf("%d",&choice);
    fflush(stdin);
    char search_name[100];
    switch(choice)
    {
        case 1:

            fp= fopen("visitors.txt","ab");
    //    fprintf(fp,"Name\t Category \t Time\n");
            puts("name");gets(v.name);
            puts("category");gets(v.category);
            time(&v.tm);
            fwrite(&v,sizeof(v),1,fp);
    //        fprintf(fp,"%s \t %s \t %s \t\n",v.name,v.category,ctime(&v.tm));
            fclose(fp);
            puts("\n Record added successfully\n");

            break;

        case 2:

            puts("Enter the name to search:");
            gets(search_name);
             puts("\n Displaying Search Records\n");
            fp = fopen("visitors.txt","rb");
            if(fp==NULL)
            {
                puts("Error....!!!");
                exit(1);
            }
            while(fread(&v,sizeof(v),1,fp))
            {
                if((strcasecmp(v.name,search_name))==0)
                    printf("\n%s\t%s\t%s\n", v.name, v.category, ctime(&v.tm));
            }
            fclose(fp);
            break;


    case 3:
             puts("\n Displaying all Search Records:\n");
            fp = fopen("visitors.txt","rb");
            while(fread(&v,sizeof(v),1,fp))
            {
                    printf("\n%s\t%s\t%s\n", v.name, v.category, ctime(&v.tm));
            }
            fclose(fp);
            break;



    case 4:
        puts("\nExiting........ key any key to exit");
        exit(0);
        break;
    }
    }
   return 0;

}
