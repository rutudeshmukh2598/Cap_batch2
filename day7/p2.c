#include<stdio.h>
#include<stdlib.h>
int main()
{
     //cahr name[20]; //static array
     char *name;
     int NoOfBytes;
     printf("\nEnter the no of bytes requ: ");
     scanf("%d",&NoOfBytes);
     
     if(name =(char *)malloc(sizeof(char)*NoOfBytes)==NULL);
     {
        printf("\nError :Unable to allocate memory\n");
        printf("EXIT_FAILURE");
     }
     else
     {
       printf("\nMemory is allocated successfully\n");
       exit(EXIT_SUCCESS);
     }
     scanf("%s",name);
     printf("\nName: %s",name);
     printf("\n\n");
     
     return 0;
     }
     
