#include<stdio.h>
#include<stdlib.h>
int main()
{
     cahr name[20]; //static array
     char *name;
     int NoOfBytes,i;
     printf("\nEnter the no of bytes requ: ");
     scanf("%d",&NoOfBytes);
     
     if((name =(char *)calloc(NoOfBytes,sizeof(char)))==NULL);
     {
        printf("\nError :Unable to allocate memory\n");
        exit("EXIT_FAILURE");
     }
     else
     {
       printf("\nMemory is allocated successfully\n");
       exit(EXIT_SUCCESS);
     }
    /* scanf("%s",name);
     printf("\nName: %s",name);*/
     
     for(i=0;i<NoOfByte;i++)
     printf("\n%u=%d=>%c",(name+i),*(name+i)),*(name+i);
     
     return 0;
     }
     
