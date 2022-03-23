#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

struct information
{
    char firsname[25];
    char lastname[25];
    long long id;
    float grade;
}info;
 FILE *p,*h,*m,*k,*a,*b,*c;
 int x,y,z;
int main()
{
 menu();

   }

   void menu()
   {

       system("color b5");
         system("cls");

          char a;
   printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t1.Lecture Operations\n\n\t\t\t\t\t\t2.Student Operations\n\n\t\t\t\t\t\t3.Exit\n");
    a=getch();
    if( a<='9' && a>='0')
    switch(a)
    {
        case '1' :LectureOperations(); break;
        case '2' :StudentOperations(); break;
        case '3' :; break;
        default: printf("invalid number.");break;

    }


   }

void LectureOperations()
{
    system("color 40");
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t1. Programming\n\n\t\t\t\t\t\t2. Physics\n\n\t\t\t\t\t\t3. Mathematics\n\n\t\t\t\t\t\t4. Return\n");
    char a;
    a=getch();
       if(a=='1'||a=='2'||a=='3'||a=='4')
    switch (a)
    {
        case '1': pro(); break;
        case '2': phy(); break;
        case '3': math(); break;
        case '4': menu(); break;

    }

}
void StudentOperations()
{
    system("color f0");
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t1.Find Student Name\n\n\t\t\t\t\t\t2.Find Student Family\n\n\t\t\t\t\t\t3.Number of Students\n\n\t\t\t\t\t\t4.Student GPA\n\n\t\t\t\t\t\t5.Return\n");

char a;
a=getch();
 if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5')
   switch(a)
   {
       case '1':fbn();break;
       case '2':fbf();break;
       case '3':nos();break;
       case '4':gpa();break;
       case '5':menu();break;


   }

}

void pro()
{
    system("color 50");
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t1.Add\n\n\t\t\t\t\t\t2.Remove\n\n\t\t\t\t\t\t3.Edit Grade\n\n\t\t\t\t\t\t4.Sorted list\n\n\t\t\t\t\t\t5.Return\n");
     char a;
a=getch();
 if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5')
   switch(a)
   {
       case '1':addpro();break;
       case '2':rmvpro();break;
       case '3':editpro();break;
       case '4':Sortedlistp();break;
       case '5':LectureOperations();break;


}
}

void phy()
{
    system("color 30");
    system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t1.Add\n\n\t\t\t\t\t\t2.Remove\n\n\t\t\t\t\t\t3.Edit Grade\n\n\t\t\t\t\t\t4.Sorted list\n\n\t\t\t\t\t\t5.Return\n");
   char a;
a=getch();
 if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5')
   switch(a)
   {
       case '1':addphy();break;
       case '2':rmvphy();break;
       case '3':editphy();break;
       case '4':Sortedlisth();break;
       case '5':LectureOperations();break;

}
}
void math()
{
    system("color e0");
    system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t1.Add\n\n\t\t\t\t\t\t2.Remove\n\n\t\t\t\t\t\t3.Edit Grade\n\n\t\t\t\t\t\t4.Sorted list\n\n\t\t\t\t\t\t5.Return\n\n\t\t\t\t\t\t");
   char a;
a=getch();
 if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5')
   switch(a)
   {
       case '1':addmath();break;
       case '2':rmvmath();break;
       case '3':editmath();break;
       case '4':Sortedlistm(); break;
       case '5':LectureOperations();break;

}
}
void Sortedlistp()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t1.Sorted By Name\n\n\t\t\t\t\t\t2.Sorted By Family\n\n\t\t\t\t\t\t3.Sorted By ID\n\n\t\t\t\t\t\t4.Sorted By Grade\n\n\t\t\t\t\t\t5.Return\n");
       char a;
a=getch();
 if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5')
   switch(a)
   {
       case '1':sortednp();break;
       case '2':sortedfp();break;
       case '3':sortedip();break;
       case '4':sortedgp();break;
       case '5':pro();break;

}
}
void Sortedlisth()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t1.Sorted By Name\n\n\t\t\t\t\t\t2.Sorted By Family\n\n\t\t\t\t\t\t3.Sorted By ID\n\n\t\t\t\t\t\t4.Sorted By Grade\n\n\t\t\t\t\t\t5.Return\n\n\t\t\t\t\t\t");
    char a;
a=getch();
 if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5')
   switch(a)
   {
       case '1':sortednh();break;
       case '2':sortedfh();break;
       case '3':sortedih();break;
       case '4':sortedgh();break;
       case '5':phy();break;
}
}
void Sortedlistm()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t1.Sorted By Name\n\n\t\t\t\t\t\t2.Sorted By Family\n\n\t\t\t\t\t\t3.Sorted By ID\n\n\t\t\t\t\t\t4.Sorted By Grade\n\n\t\t\t\t\t\t5.Return\n");
    char a;
a=getch();
 if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5')
   switch(a)
   {
       case '1':sortednm();break;
       case '2':sortedfm();break;
       case '3':sortedim();break;
       case '4':sortedgm();break;
       case '5':math();break;
}
}
void addpro()
{
    system("cls");
a=fopen("add.txt","r+");
p=fopen("Programming.txt","a+");
fscanf(a,"%d",&x);
if(p==NULL){
        printf("ERROR");
        exit(1);
    }

fscanf(a,"%d",&x);
 printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tEnter students info\n");
printf("\n\t\t\t\t\t\tname: ");
 scanf("\n\t\t\t\t\t\t%12s",&info.firsname);
 printf("\n\t\t\t\t\t\tfamily: ");
 scanf("\n\t\t\t\t\t\t%s",&info.lastname);
 printf("\n\t\t\t\t\t\tid: ");
 scanf("\n\t\t\t\t\t\t%lld",&info.id);
 printf("\n\t\t\t\t\t\tgrade: ");
 scanf("\n\t\t\t\t\t\t%f",&info.grade);
 fprintf(p,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
x++;
fclose(a);
a=fopen("add.txt","w");
fprintf(a,"%d",x);
fclose(a);
fclose(p);
char s;
 s=getchar();
      pro();

}
void rmvpro()
{
    system("cls");
    long long a;
      printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tid of student: ");
     scanf("\t\t\t\t\t\t%lld",&a);
    k=fopen("help.txt","w");
    p=fopen("Programming.txt","r");
    fscanf(p,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    while(feof(p)==0)
    {
    fprintf(k,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
    fscanf(p,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    }
    fclose(p);
    fclose(k);
    p=fopen("Programming.txt","w");
    k=fopen("help.txt","r");

       fscanf(k,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    while(feof(k)==0)
    {

       if(a!=info.id)
        fprintf(p,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
         fscanf(k,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    }
    fclose(k);
    fclose(p);
    char s;
 s=getchar();
 getchar();
      pro();
}
void addphy()
{

    system("cls");
b=fopen("addb.txt","r+");
h=fopen("Physics.txt","a+");
fscanf(b,"%d",&y);
if(h==NULL){
        printf("ERROR");
        exit(1);
    }

fscanf(b,"%d",&y);
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tEnter students info-\n");
printf("\n\t\t\t\t\t\tname: ");
 scanf("\n\t\t\t\t\t\t%12s",&info.firsname);
 printf("\n\t\t\t\t\t\tfamily: ");
 scanf("\n\t\t\t\t\t\t%s",&info.lastname);
 printf("\n\t\t\t\t\t\tid: ");
 scanf("\n\t\t\t\t\t\t%lld",&info.id);
 printf("\n\t\t\t\t\t\tgrade: ");
 scanf("\n\t\t\t\t\t\t%f",&info.grade);
 y++;
 fprintf(h,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
fclose(b);
b=fopen("addb.txt","w");
fprintf(b,"%d",y);
fclose(b);
fclose(h);
char s;
 s=getchar();
       phy();

}
void rmvphy()
{
    system("cls");
    long long a;
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tid of student: ");
     scanf("\t\t\t\t\t\t%lld",&a);
    k=fopen("help.txt","w");
    h=fopen("Physics.txt","r");
    fscanf(h,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    while(feof(h)==0)
    {
    fprintf(k,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
    fscanf(h,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    }
    fclose(h);
    fclose(k);
    h=fopen("Physics.txt","w");
    k=fopen("help.txt","r");
       fscanf(k,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    while(feof(k)==0)
    {

       if(a!=info.id)
        fprintf(h,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
         fscanf(k,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    }
    fclose(k);
    fclose(h);
    char s;
 s=getchar();
 getchar();
       phy();
}
void addmath()
{

    system("cls");
c=fopen("addc.txt","r+");
m=fopen("math.txt","a+");
fscanf(c,"%d",&z);
if(m==NULL){
        printf("ERROR");
        exit(1);
    }

fscanf(c,"%d",&z);
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tEnter students info-\n");
printf("\n\t\t\t\t\t\tname: ");
 scanf("\n\t\t\t\t\t\t%12s",&info.firsname);
 printf("\n\t\t\t\t\t\tfamily: ");
 scanf("\n\t\t\t\t\t\t%s",&info.lastname);
 printf("\n\t\t\t\t\t\tid: ");
 scanf("\n\t\t\t\t\t\t%lld",&info.id);
 printf("\n\t\t\t\t\t\tgrade: ");
 scanf("\n\t\t\t\t\t\t%f",&info.grade);
 z++;
 fprintf(m,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
fclose(c);
c=fopen("addc.txt","w");
fprintf(c,"%d",z);
fclose(c);
fclose(m);
char s;
 s=getchar();
       math();

}

void rmvmath()
{
    system("cls");
    long long a;
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tid of student: ");
     scanf("\t\t\t\t\t\t%lld",&a);
    k=fopen("help.txt","w");
    m=fopen("math.txt","r");
    fscanf(m,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    while(feof(m)==0)
    {
    fprintf(k,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
    fscanf(m,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    }
    fclose(m);
    fclose(k);
    m=fopen("math.txt","w");
    k=fopen("help.txt","r");
        fscanf(k,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    while(feof(k)==0)
    {

       if(a!=info.id)
        fprintf(m,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
         fscanf(k,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    }
    fclose(k);
    fclose(m);
    char s;
 s=getchar();
       math();
}
void editpro()
{
    system("cls");
    long long a;
    float b;
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tEnter id: ");
    scanf("\t\t\t\t\t\t%lld",&a);
    printf("\n\t\t\t\t\t\tEnter new grade: ");
    scanf("\t\t\t\t\t\t%f",&b);
    k=fopen("help.txt","w");
    p=fopen("Programming.txt","r");
    fscanf(p,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    while(feof(p)==0)
    {
    fprintf(k,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
    fscanf(p,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    }
    fclose(p);
    fclose(k);
    p=fopen("Programming.txt","w");
    k=fopen("help.txt","r");
    fscanf(k,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    while(feof(k)==0)
    {
        if(a!=info.id)
    fprintf(p,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
         else fprintf(p,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,b);
         fscanf(k,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    }
    fclose(p);
    fclose(k);
    char s;
 s=getchar();
       pro();

}
void editphy()
{
    system("cls");
    long long a;
    float b;
   printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tEnter id: ");
    scanf("\t\t\t\t\t\t%lld",&a);
    printf("\n\t\t\t\t\t\tEnter new grade: ");
    scanf("\t\t\t\t\t\t%f",&b);
    k=fopen("help.txt","w");
    h=fopen("Physics.txt","r");
    fscanf(h,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    while(feof(h)==0)
    {
    fprintf(k,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
    fscanf(h,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    }
    fclose(h);
    fclose(k);
    h=fopen("Physics.txt","w");
    k=fopen("help.txt","r");
    fscanf(k,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    while(feof(k)==0)
    {
        if(a!=info.id)
    fprintf(h,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
         else fprintf(h,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,b);
         fscanf(k,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    }
    fclose(h);
    fclose(k);
    char s;
 s=getchar();
 getchar();
       phy();

}
void editmath()
{
    system("cls");
    long long a;
    float b;
   printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tEnter id: ");
    scanf("\t\t\t\t\t\t%lld",&a);
    printf("\n\t\t\t\t\t\tEnter new grade: ");
    scanf("\t\t\t\t\t\t%f",&b);
    k=fopen("help.txt","w");
    m=fopen("math.txt","r");
    fscanf(m,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    while(feof(m)==0)
    {
    fprintf(k,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
    fscanf(m,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    }
    fclose(m);
    fclose(k);
    m=fopen("math.txt","w");
    k=fopen("help.txt","r");
    fscanf(k,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    while(feof(k)==0)
    {
        if(a!=info.id)
    fprintf(m,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,info.grade);
         else fprintf(m,"%-12s%-15s%-12lld%-5.2f\n",info.firsname,info.lastname,info.id,b);
         fscanf(k,"%12s%s%lld%f",&info.firsname,&info.lastname,&info.id,&info.grade);
    }

    fclose(m);
    fclose(k);
    char s;
 s=getchar();
 getchar();
       math();

}

void sortednp()
{
    system("cls");
   p=fopen("Programming.txt","r+");
   a=fopen("add.txt","r+");
   fscanf(a,"%d",&x);
   struct information arr[x],b;
   for(int i=0;i<x;i++)
   {
   fscanf(p,"%12s%s%lld%f",&arr[i].firsname,&arr[i].lastname,&arr[i].id,&arr[i].grade);
 }

     for(int i=0;i<x;i++)
        for(int j=i+1;j<x;j++){
             if(strcmp(arr[i].firsname,arr[j].firsname)>0){
                b=arr[j];
                arr[j]=arr[i];
                arr[i]=b;
             }

}
 printf("\n\t\t\t\t\t");
             for(int i=0;i<x;i++)
   {
   printf("%s   %s  %lld  %f\n\n\t\t\t\t\t",arr[i].firsname,arr[i].lastname,arr[i].id,arr[i].grade);
 }
 fclose(a);
 fclose(p);
 char s;
 s=getchar();
     Sortedlistp();
}
void sortednh()
{
    system("cls");
   h=fopen("physics.txt","r+");
   b=fopen("addb.txt","r+");
   fscanf(b,"%d",&y);
   struct information arr[y],c;
   for(int i=0;i<y;i++)
   {
   fscanf(h,"%12s%s%lld%f",&arr[i].firsname,&arr[i].lastname,&arr[i].id,&arr[i].grade);
 }

     for(int i=0;i<y;i++)
        for(int j=i+1;j<y;j++){
             if(strcmp(arr[i].firsname,arr[j].firsname)>0){
                c=arr[j];
                arr[j]=arr[i];
                arr[i]=c;
             }

}
            printf("\n\t\t\t\t\t");
             for(int i=0;i<y;i++)
   {
   printf("%s   %s  %lld  %f\n\n\t\t\t\t\t",arr[i].firsname,arr[i].lastname,arr[i].id,arr[i].grade);
 }
 fclose(b);
 fclose(h);
 char s;
 s=getchar();
     Sortedlisth();
}
void sortednm()
{
    system("cls");
   m=fopen("math.txt","r+");
   c=fopen("addc.txt","r+");
   fscanf(c,"%d",&z);
   struct information arr[z],d;
   for(int i=0;i<z;i++)
   {
   fscanf(m,"%12s%s%lld%f",&arr[i].firsname,&arr[i].lastname,&arr[i].id,&arr[i].grade);
 }

     for(int i=0;i<z;i++)
        for(int j=i+1;j<z;j++){
             if(strcmp(arr[i].firsname,arr[j].firsname)>0){
                d=arr[j];
                arr[j]=arr[i];
                arr[i]=d;
             }

}
    printf("\n\t\t\t\t\t");
             for(int i=0;i<z;i++)
   {
   printf("%s   %s  %lld  %f\n\n\t\t\t\t\t",arr[i].firsname,arr[i].lastname,arr[i].id,arr[i].grade);
 }
 fclose(m);
 fclose(c);
 char s;
 s=getchar();
     Sortedlistm();
}

void sortedfp()
{
    system("cls");
   p=fopen("Programming.txt","r+");
   a=fopen("add.txt","r+");
   fscanf(a,"%d",&x);
   struct information arr[x],b;
   for(int i=0;i<x;i++)
   {
   fscanf(p,"%12s%s%lld%f",&arr[i].firsname,&arr[i].lastname,&arr[i].id,&arr[i].grade);
 }
     for(int i=0;i<x;i++)
        for(int j=i+1;j<x;j++){
             if(strcmp(arr[i].lastname,arr[j].lastname)>0){
                b=arr[j];
                arr[j]=arr[i];
                arr[i]=b;
             }

}
             printf("\n\t\t\t\t\t");
             for(int i=0;i<x;i++)
   {
   printf("%s   %s  %lld  %f\n\n\t\t\t\t\t",arr[i].lastname,arr[i].firsname,arr[i].id,arr[i].grade);
   }
   fclose(a);
   fclose(p);
   char s;
 s=getchar();
     Sortedlistp();
}
void sortedfh()
{
    system("cls");
   h=fopen("physics.txt","r+");
   b=fopen("addb.txt","r+");
   fscanf(b,"%d",&y);
   struct information arr[y],c;
   for(int i=0;i<y;i++)
   {
   fscanf(h,"%12s%s%lld%f",&arr[i].firsname,&arr[i].lastname,&arr[i].id,&arr[i].grade);
 }
     for(int i=0;i<y;i++)
        for(int j=i+1;j<y;j++){
             if(strcmp(arr[i].lastname,arr[j].lastname)>0){
                c=arr[j];
                arr[j]=arr[i];
                arr[i]=c;
             }

}
        printf("\n\t\t\t\t\t");
             for(int i=0;i<y;i++)
   {
   printf("%s   %s  %lld  %f\n\n\t\t\t\t\t",arr[i].lastname,arr[i].firsname,arr[i].id,arr[i].grade);
 }
 fclose(b);
 fclose(h);
 char s;
 s=getchar();
     Sortedlisth();

}
void sortedfm()
{
    system("cls");
   m=fopen("math.txt","r+");
   c=fopen("addc.txt","r+");
   fscanf(c,"%d",&z);
   struct information arr[z],d;
   for(int i=0;i<z;i++)
   {
   fscanf(m,"%12s%s%lld%f",&arr[i].firsname,&arr[i].lastname,&arr[i].id,&arr[i].grade);
 }
     for(int i=0;i<z;i++)
        for(int j=i+1;j<z;j++){
             if(strcmp(arr[i].lastname,arr[j].lastname)>0){
                d=arr[j];
                arr[j]=arr[i];
                arr[i]=d;
             }

}
            printf("\n\t\t\t\t\t");
             for(int i=0;i<z;i++)
   {
   printf("%s   %s  %lld  %f\n\n\t\t\t\t\t",arr[i].lastname,arr[i].firsname,arr[i].id,arr[i].grade);
 }
 fclose(m);
 fclose(c);
 char s;
 s=getchar();
     Sortedlistm();
}
void sortedim()
{
    system("cls");
   m=fopen("math.txt","r+");
   c=fopen("addc.txt","r+");
   fscanf(c,"%d",&z);
   struct information arr[z],d;
   for(int i=0;i<z;i++)
   {
   fscanf(m,"%12s%s%lld%f",&arr[i].firsname,&arr[i].lastname,&arr[i].id,&arr[i].grade);
 }
     for(int i=0;i<z;i++)
        for(int j=i+1;j<z;j++){
             if(arr[i].id<arr[j].id){
                d=arr[j];
                arr[j]=arr[i];
                arr[i]=d;
             }

}
            printf("\n\t\t\t\t\t");
             for(int i=0;i<z;i++)
   {
   printf("%lld   %s  %s  %f\n\n\t\t\t\t\t",arr[i].id,arr[i].firsname,arr[i].lastname,arr[i].grade);
 }
 fclose(m);
 fclose(c);
 char s;
 s=getchar();
     Sortedlistm();
}
void sortedih()
{
    system("cls");
   h=fopen("physics.txt","r+");
   b=fopen("addb.txt","r+");
   fscanf(b,"%d",&y);
   struct information arr[y],c;
   for(int i=0;i<y;i++)
   {
   fscanf(h,"%12s%s%lld%f",&arr[i].firsname,&arr[i].lastname,&arr[i].id,&arr[i].grade);
 }
     for(int i=0;i<y;i++)
        for(int j=i+1;j<y;j++){
             if(arr[i].id<arr[j].id){
                c=arr[j];
                arr[j]=arr[i];
                arr[i]=c;
             }

}
             printf("\n\t\t\t\t\t");
             for(int i=0;i<y;i++)
   {
   printf("%lld   %s  %s  %f\n\n\t\t\t\t\t",arr[i].id,arr[i].firsname,arr[i].lastname,arr[i].grade);
 }
 fclose(b);
 fclose(h);
 char s;
 s=getchar();
     Sortedlisth();

}
void sortedip()
{
    system("cls");
   p=fopen("Programming.txt","r+");
   a=fopen("add.txt","r+");
   fscanf(a,"%d",&x);
   struct information arr[x],b;
   for(int i=0;i<x;i++)
   {
   fscanf(p,"%12s%s%lld%f",&arr[i].firsname,&arr[i].lastname,&arr[i].id,&arr[i].grade);
 }
     for(int i=0;i<x;i++)
        for(int j=i+1;j<x;j++){
             if(arr[i].id<arr[j].id){
                b=arr[j];
                arr[j]=arr[i];
                arr[i]=b;
             }

}
             printf("\n\t\t\t\t\t");
             for(int i=0;i<x;i++)
   {
   printf("%lld   %s  %s  %f\n\n\t\t\t\t\t",arr[i].id,arr[i].firsname,arr[i].lastname,arr[i].grade);
   }
   fclose(a);
   fclose(p);
   char s;
 s=getchar();
     Sortedlistp();
}
void sortedgp()
{
    system("cls");
   p=fopen("Programming.txt","r+");
   a=fopen("add.txt","r+");
   fscanf(a,"%d",&x);
   struct information arr[x],b;
   for(int i=0;i<x;i++)
   {
   fscanf(p,"%12s%s%lld%f",&arr[i].firsname,&arr[i].lastname,&arr[i].id,&arr[i].grade);
 }
     for(int i=0;i<x;i++)
        for(int j=i+1;j<x;j++){
             if(arr[i].grade<arr[j].grade){
                b=arr[j];
                arr[j]=arr[i];
                arr[i]=b;
             }

}
             printf("\n\t\t\t\t\t");
             for(int i=0;i<x;i++)
   {
   printf("%f   %s  %s  %lld\n\n\t\t\t\t\t",arr[i].grade,arr[i].firsname,arr[i].lastname,arr[i].id);
   }
   fclose(a);
   fclose(p);
   char s;
 s=getchar();
     Sortedlistp();
}
void sortedgh()
{
    system("cls");
   h=fopen("physics.txt","r+");
   b=fopen("addb.txt","r+");
   fscanf(b,"%d",&y);
   struct information arr[y],c;
   for(int i=0;i<y;i++)
   {
   fscanf(h,"%12s%s%lld%f",&arr[i].firsname,&arr[i].lastname,&arr[i].id,&arr[i].grade);
 }
     for(int i=0;i<y;i++)
        for(int j=i+1;j<y;j++){
             if(arr[i].grade<arr[j].grade){
                c=arr[j];
                arr[j]=arr[i];
                arr[i]=c;
             }

}
             printf("\n\t\t\t\t\t");
             for(int i=0;i<y;i++)
   {
   printf("%f   %s  %s  %lld\n\n\t\t\t\t\t",arr[i].grade,arr[i].firsname,arr[i].lastname,arr[i].id);
 }
 fclose(b);
 fclose(h);
 char s;
 s=getchar();
     Sortedlisth();
}
void sortedgm()
{
    system("cls");
   m=fopen("math.txt","r+");
   c=fopen("addc.txt","r+");
   fscanf(c,"%d",&z);
   struct information arr[z],d;
   for(int i=0;i<z;i++)
   {
   fscanf(m,"%12s%s%lld%f",&arr[i].firsname,&arr[i].lastname,&arr[i].id,&arr[i].grade);
 }
     for(int i=0;i<z;i++)
        for(int j=i+1;j<z;j++){
             if(arr[i].grade<arr[j].grade){
                d=arr[j];
                arr[j]=arr[i];
                arr[i]=d;
             }

}
            printf("\n\t\t\t\t\t");
             for(int i=0;i<z;i++)
   {
   printf("%f   %s  %s  %lld\n\n\t\t\t\t\t",arr[i].grade,arr[i].firsname,arr[i].lastname,arr[i].id);
 }
 fclose(m);
 fclose(c);
 char s;
 s=getchar();
     Sortedlistm();
}
void nos()
{
   system("cls");
   a=fopen("add.txt","r+");
   b=fopen("addb.txt","r+");
   c=fopen("addc.txt","r+");
   fscanf(a,"%d",&x);
   fscanf(b,"%d",&y);
   fscanf(c,"%d",&z);
   printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tNumber of the programming students is %d\n",x);
   printf("\n\t\t\t\t\tNumber of the physics students is %d\n",y);
   printf("\n\t\t\t\t\tNumber of the math students is %d\n",z);
   fclose(a);
   fclose(b);
   fclose(c);
    char s;
 s=getchar();
     StudentOperations();

}

void fbn()
{
   system("cls");
   p=fopen("Programming.txt","r+");
   h=fopen("physics.txt","r+");
   m=fopen("math.txt","r+");
   a=fopen("add.txt","r+");
   b=fopen("addb.txt","r+");
   c=fopen("addc.txt","r+");
   int ab[30];
   printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tenter the name: ");
   scanf("\t\t\t\t\t\t%s",&ab);
   fscanf(a,"%d",&x);
   fscanf(b,"%d",&y);
   fscanf(c,"%d",&z);
   struct information arr1[x];
   struct information arr2[y];
   struct information arr3[z];
 for(int i=0;i<x;i++)
    fscanf(p,"%12s%s%lld%f",&arr1[i].firsname,&arr1[i].lastname,&arr1[i].id,&arr1[i].grade);
    printf("\n\n\t\t\t\t\t\tinformation of %s name from programming class is:\n",ab);
    for(int i=0;i<x;i++)
    {
        if(strcmp(ab,arr1[i].firsname)==0)
        {
            printf("\n\n\t\t\t\t\t\tfamily:%s\n\t\t\t\t\t\tgrade:%f\n\t\t\t\t\t\tid:%lld",arr1[i].lastname,arr1[i].grade,arr1[i].id);
             printf("\n\n");

    }
    else printf("");
    }

for(int i=0;i<y;i++)
    fscanf(h,"%12s%s%lld%f",&arr2[i].firsname,&arr2[i].lastname,&arr2[i].id,&arr2[i].grade);
    printf("\n\n\t\t\t\t\t\tinformation of %s from physics class is:\n",ab);
    for(int i=0;i<y;i++)
    {
        if(strcmp(ab,arr2[i].firsname)==0)
        {
            printf("\n\n\t\t\t\t\t\tfamily:%s\n\t\t\t\t\t\tgrade:%f\n\t\t\t\t\t\tid:%lld\n",arr2[i].lastname,arr2[i].grade,arr2[i].id);
            printf("\n\n");

}
else printf("");
}

for(int i=0;i<z;i++)
    fscanf(m,"%12s%s%lld%f",&arr3[i].firsname,&arr3[i].lastname,&arr3[i].id,&arr3[i].grade);
    printf("\n\n\t\t\t\t\t\tinformation of %s from programming class is:\n",ab);
    for(int i=0;i<z;i++)
    {
        if(strcmp(ab,arr3[i].firsname)==0){
            printf("\n\n\t\t\t\t\t\tfamily:%s\n\t\t\t\t\t\tgrade:%f\n\t\t\t\t\t\tid:%lld\n",arr3[i].lastname,arr3[i].grade,arr3[i].id);
             printf("\n\n");

}
else printf("");
}
fclose(a);fclose(b);fclose(c);fclose(p);fclose(h);fclose(m);
        char s;
 s=getchar();
 getchar();
     StudentOperations();
}
void fbf()
{
   system("cls");
   p=fopen("Programming.txt","r+");
   h=fopen("physics.txt","r+");
   m=fopen("math.txt","r+");
   a=fopen("add.txt","r+");
   b=fopen("addb.txt","r+");
   c=fopen("addc.txt","r+");
   int ab[30];
   printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tenter the family: ");
   scanf("\t\t\t\t\t\t%s",&ab);
   fscanf(a,"%d",&x);
   fscanf(b,"%d",&y);
   fscanf(c,"%d",&z);
   struct information arr1[x];
   struct information arr2[y];
   struct information arr3[z];
 for(int i=0;i<x;i++)
    fscanf(p,"%12s%s%lld%f",&arr1[i].firsname,&arr1[i].lastname,&arr1[i].id,&arr1[i].grade);
    printf("\n\n\t\t\t\t\t\tinformation of %s family from programming class is:\n",ab);
    for(int i=0;i<x;i++)
    {
        if(strcmp(ab,arr1[i].lastname)==0)
        {
            printf("\n\n\t\t\t\t\t\tname:%s\n\t\t\t\t\t\tgrade:%f\n\t\t\t\t\t\tid:%lld\n",arr1[i].firsname,arr1[i].grade,arr1[i].id);
             printf("\n\n");

    }
    else printf("");
    }

for(int i=0;i<y;i++)
    fscanf(h,"%12s%s%lld%f",&arr2[i].firsname,&arr2[i].lastname,&arr2[i].id,&arr2[i].grade);
    printf("\n\n\t\t\t\t\t\tinformation of %s family from physics class is:\n",ab);
    for(int i=0;i<y;i++)
    {
        if(strcmp(ab,arr2[i].lastname)==0)
        {
            printf("\n\n\t\t\t\t\t\tname:%s\n\t\t\t\t\t\tgrade:%f\n\t\t\t\t\t\tid:%lld\n",arr2[i].firsname,arr2[i].grade,arr2[i].id);
            printf("\n\n");

}
else printf("");
}

for(int i=0;i<z;i++)
    fscanf(m,"%12s%s%lld%f",&arr3[i].firsname,&arr3[i].lastname,&arr3[i].id,&arr3[i].grade);
    printf("\n\n\t\t\t\t\t\tinformation of %s from programming class is:\n",ab);
    for(int i=0;i<z;i++)
    {
        if(strcmp(ab,arr3[i].lastname)==0){
            printf("\n\n\t\t\t\t\t\tname:%s\n\t\t\t\t\t\tgrade:%f\n\t\t\t\t\t\tid:%lld\n",arr3[i].firsname,arr3[i].grade,arr3[i].id);
            printf("\n\n");

}
else printf("");
}
fclose(a);fclose(b);fclose(c);fclose(p);fclose(h);fclose(m);
        char s;
 s=getchar();
 getchar();
     StudentOperations();
}
void gpa()
{
   system("cls");
   p=fopen("Programming.txt","r+");
   h=fopen("physics.txt","r+");
   m=fopen("math.txt","r+");
   a=fopen("add.txt","r+");
   b=fopen("addb.txt","r+");
   c=fopen("addc.txt","r+");
   long long ab;
   float avg1,avg2,avg3,gpat;
   int name[30];
   printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tenter the id: ");
   scanf("\t\t\t\t\t\t%lld",&ab);
   fscanf(a,"%d",&x);
   fscanf(b,"%d",&y);
   fscanf(c,"%d",&z);
   struct information arr1[x];
   struct information arr2[y];
   struct information arr3[z];


      for(int i=0;i<x;i++)
    fscanf(p,"%12s%s%lld%f",&arr1[i].firsname,&arr1[i].lastname,&arr1[i].id,&arr1[i].grade);
      printf("\n\n\t\t\t\t\t\t");
      for(int i=0;i<x;i++)
      {
          if(ab==arr1[i].id)
          {
            avg1=arr1[i].grade;

          }

      }


  for(int i=0;i<y;i++)
    fscanf(h,"%12s%s%lld%f",&arr2[i].firsname,&arr2[i].lastname,&arr2[i].id,&arr2[i].grade);
      for(int i=0;i<y;i++)
      {
          if(ab==arr2[i].id)
          {
            avg2=arr2[i].grade;
          }
      }


  for(int i=0;i<z;i++)
    fscanf(m,"%12s%s%lld%f",&arr3[i].firsname,&arr3[i].lastname,&arr3[i].id,&arr3[i].grade);
      for(int i=0;i<z;i++)
      {
          if(ab==arr3[i].id)
          {


           avg3=arr3[i].grade;
           name[30]=arr3[i].firsname;
      }
      }
      gpat=avg1+avg2+avg3;
      printf("\n\n\t\t\t\t\t\tname of student is:%s\n\t\t\t\t\t\tavarage is:%f\n",name[30],gpat/3);

      fclose(a);fclose(b);fclose(c);fclose(p);fclose(h);fclose(m);
        char s;
 s=getchar();
 getchar();
     StudentOperations();

}

