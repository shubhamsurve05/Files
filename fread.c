#include<stdio.h>
#include<stdlib.h>
struct record
{
   char name[20];
   int roll;
   int marks;
}students;
int main(void)
{
   FILE *fp;
   fp=fopen("stu","rb");
   if(fp==NULL)
   {
      printf("error in file\n");
      exit(1);      
   }
   printf("\nName\trollno\tmarks");
   while(fread(&students,sizeof(students),1,fp)==1)
   {
	  printf("%s\t",students.name);
	  printf("%d\t",students.roll);
	  printf("%d\t",students.marks); 
   }	   
   fclose(fp);
   return 0;
}
