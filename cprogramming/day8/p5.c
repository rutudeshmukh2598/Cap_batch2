/*

 demo on command line argument
 */
 
 #include<stdio.h>
 #include<string.h>
 int main(int argc, char *argv[])
 {  
 
    int i=0;
   
     printf("\n NO OF arguments count =%d",argc);
     /*
      printf("\n 1st string as arguments  =%s",argv[0]);
       printf("\n 2nd string as arguments =%s",argv[1]);
       
        printf("\n 1 string as arguments and 1 char=%c",argv[1][0]); 
        printf("\n 2 string as arguments and 1 char =%c",argv[1][1],argv[1][1]);
       */
       for(i=0;i<argc;i++)
         printf("\nargv[%d] =%s",i,argv[i]);
         
         for(i=0;i<strlen(argv[0])+1;i++)
         printf("\n%c =%d ",argv[0][i],argv[0][i]);
         
         
        printf("\n\n");
    return 0;
    }
