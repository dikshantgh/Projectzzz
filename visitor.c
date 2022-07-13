#include<stdio.h>
#include<time.h>
struct visitor
{
    char name[50];
    char category[50];
    time_t tm ;

}v;

int main()

{
    puts("1. Enter the record\n2.Search the record\n3.Display all records\nEnter yout choice:");
    int choice;
    scanf("%d",&choice);
    FILE *fp ;
    char search_name[50];
    switch(choice)
    {
        case 1:
        {
            getchar();
            fp= fopen("visitors.txt","a");
//    fprintf(fp,"Name\t Category \t Time\n");


        puts("name");gets(v.name);
        puts("category");gets(v.category);
        time(&v.tm);
        fwrite(&v,sizeof(v),1,fp);
//        fprintf(fp,"%s \t %s \t %s \t\n",v.name,v.category,ctime(&v.tm));
        fclose(fp);
        break;
        }

        case 2:
        {
        getchar();
        puts("Enter the name to search:");
        gets(search_name);
        fp = fopen("visitors.txt","r");

        while(fread(&v,sizeof(v),1,fp))
        {
            if((strcasecmp(v.name,search_name))==0)
                printf("\n%s\t%s\t%s\n", v.name, v.category, ctime(&v.tm));
        }
        fclose(fp);
        break;
        }

    case 3:
    {
     getchar();


            fp = fopen("visitors.txt","r");

        while(fread(&v,sizeof(v),1,fp))
        {
                printf("\n%s\t%s\t%s\n", v.name, v.category, ctime(&v.tm));
        }
        fclose(fp);
        break;
        }

    }

    return 0;

}
