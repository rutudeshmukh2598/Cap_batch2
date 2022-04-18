#include<stdio.h>
int main()
{

   FILE *fp;
   fp=fopen("data.txt","r");
   fclose(fp);
   return 0;
   }
