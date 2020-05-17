#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   FILE *fptr;
   int ch;
   if((fptr=fopen("myfile","w"))==NULL)
   {
      printf("error in opening file");
      exit(1);
   }
   printf("Enter Text");
   while((ch=getchar())!=EOF)
	   fputc(ch,fptr);
   fclose(fptr);
   return 0;
}
