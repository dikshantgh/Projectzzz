#include<stdio.h>
#include<time.h>
struct visitor
{
    char name[50];
    char category[50];
    time_t tm;

}v;

int main()
{
    FILE *fp ;
    fp= fopen("visitors.txt","a");
//    fprintf(fp,"Name\t Category \t Time\n");


        puts("name");gets(v.name);
        puts("category");gets(v.category);
        time(&v.tm);

//        fwrite(&v,sizeof(v),1,fp);
        fprintf(fp,"%s \t %s \t %s \t\n",v.name,v.category,ctime(&v.tm));
        fclose(fp);


    return 0;

}
