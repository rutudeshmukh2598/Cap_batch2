#include<stdio.h>
#include<string.h>
#include "Users.h"

int main(int argc, char const *argv[])
{
   USERS u[3];
  char t[2]={"\0"};
  int cUid=0, i,flag=0;
  
  for(i=0;i<3;i++)
  {
     setUsers(&u[i]);
     gets(t);
     }
     for(i=0;i<3;i++)
     {
       getUsers(u[i]);
       }
       printf("\nEnter the User ID and passwd: ");
       scanf("%d%s",&cUid,&cpasswd);
       
       for(i=0;i<3;i++)
       {
          if(u[i].Uid ==cUid)
          {
            if(strcmp(u[i].Upasswd,&cpasswd)==0)
            {
               flag=1;
               break;
               }
       }
       }
       if(flag !=1)
         printf("\ncheck UID/PASSWORD\n");
         else
         printf("\nmatched\n");
         
       printf("\nEnd of the program\n");
       
       return 0;
       }   
