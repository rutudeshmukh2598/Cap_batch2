#include<stdio.h>
#include<string.h>
int main()
{
   char s1[10]="ABCD";
   char str[6]="EFGH";
   strcpy(str ,"EFGH");
  strncat(s1,str,9);
  printf("%s",s1);
  return 0;
  }
