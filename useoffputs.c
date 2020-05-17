#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  FILE *fptr;
  char str[80];
  if((fptr=fopen("test1","w"))==NULL)
  {
	  printf("Error in opening file");
	  exit(1);
  }	  
  printf("Enter the text");
  printf("To stop entering, press ctrl+d/Ctrl+z\n");
  while(gets(str)!=NULL)
  {
	strcat(str,"\n");
	fputc(str,fptr);
  }  
  fclose(fptr);
  return 0;
}
