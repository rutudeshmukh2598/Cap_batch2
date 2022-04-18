#include<stdio.h>
#include<string.h>
int main()
{
   char st1[]="study";
   char str2[]="tonight";
   int i,j;
   
   i=strcmp("str1","str2");
   j=strcmp("str2","str1");
   printf("%d%d",i,j);
   return 0;
   }
