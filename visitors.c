// add heading and check if ftell is o then only doo it again.
// add id counter
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
struct visitor
{
    int id;
    char name[100];
    char category[100];
    time_t tm ;

}v;

int main()
{
    puts("\n\t\tWELCOME TO VISITORS RECORD MANAGEMENT SYSTEM\n\t\t\t[created by BIM I Semester HSMSS]");

    system("COLOR 31");
    FILE *fp ;
    int counter =1;
    int entered_id;
    while(1){
            printf("___________________________________________________________________________________\n");
    puts("\n1.Enter the record\n2.Search the record\n3.Display all records\n4.Exit\nEnter your choice:");
    int choice;
    scanf("%d",&choice);
    fflush(stdin);
    char search_name[100];
    switch(choice)
    {
        case 1:

            fp= fopen("visitors.txt","ab");
    //    fprintf(fp,"Name\t Category \t Time\n");
            v.id=counter;
            puts("Please enter name:");gets(v.name);
            puts("Please enter the category:");gets(v.category);
            time(&v.tm);
            fwrite(&v,sizeof(v),1,fp);
    //        fprintf(fp,"%s \t %s \t %s \t\n",v.name,v.category,ctime(&v.tm));
            fclose(fp);
            puts("\n Record added successfully\n");
            counter++;
            break;

        case 2:

            puts("Enter the name to search:");
            gets(search_name);
             puts("\n Displaying Search Records\n");
             puts("\nId\t Name \t\t Category \t Date and Time");
            fp = fopen("visitors.txt","rb");
            if(fp==NULL)
            {
                puts("Error....!!!");
                exit(1);
            }
            while(fread(&v,sizeof(v),1,fp))
            {
                if((strcasecmp(v.name,search_name))==0)
                    printf("%d.\t%s\t%s\t\t%s", v.id, v.name, v.category, ctime(&v.tm));
            }
            fclose(fp);
            break;


    case 3:
             puts("\n Displaying all Records:\n");
             puts("\nId\t Name \t \tCategory \t \tDate and Time");
            fp = fopen("visitors.txt","rb");
            while(fread(&v,sizeof(v),1,fp))
            {
                    printf("%d.\t%s\t%s\t\t%s", v.id, v.name, v.category, ctime(&v.tm));
            }
            fclose(fp);
            break;

    case 4:
        puts("\nExiting........ key any key to exit");
        exit(0);
        break;

    default:

        puts("\nWe only have 1,2,3, and 4 as choice. Please select among those:");

    }

}   return 0;

}

