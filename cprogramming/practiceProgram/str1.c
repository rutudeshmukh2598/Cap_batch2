
#include<stdio.h>
#include<string.h>

int main()
{
   char arr[]="rutuja";
   int leng1,leng2;
   leng1=strlen (arr);
   leng2=strlen ("good morning");
   printf("\n string: %s length =%d",arr,leng1);
   printf("\n string: %s length =%d","good morning",leng2);
   return 0;
   }
