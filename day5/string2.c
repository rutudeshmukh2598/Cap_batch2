#include<stdio.h>
#include<string.h>
int main()
{
   char name1[20]="rutuja";
   char name2[20]="deshmukh";
   int iength;
  
  printf("\nName1=%s\t Name2=%s",name1,name2);
   //strcat(name1,name2);
   printf("\n Length of Name1=%d",strlen(name1));
   printf("\n size of Name1=%d",sizeof(name1));
   
   printf("\n Length of Name2=%d",strlen(name2));
   printf("\n size of Name2=%d",sizeof(name1));
    strcpy(name1,name2);
   printf("\nName1=%s\t Name2=%s",name1,name2);
  
  
  
   printf("\n\n");
   return 0;
   }
