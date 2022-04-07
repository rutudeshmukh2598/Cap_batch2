#include<stdio.h>
int main()
{
 char ch[6]={'r','u','t','u','j','a','\0'};
 char name[6]="rutuja";
 int i;
 for (i=0;i<6;i++)
 {
 printf("\naddress of ch[%d]=%u and value=> %c =%d",i,&ch[i],ch[i]);
 }
 printf("\n ===================");
 
 for(i=0;i<6;i++)
 {
  printf("\n address of name[%d]=%u and value =>%c=%d",i,&name[i],name[i]);
  }
  printf("ch=> %s",&ch[0]);
    printf("name=> %s",name);
    
  printf("\n\n");
  return 0;
  }
