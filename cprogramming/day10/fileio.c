/*
  demo on file operation
  
  fopen,fclose,fprintf,fscanf,getc,putc,ftell,fseek



*/

#include<stdio.h>
#include<stdlib.h>

int main()
{


    FILE *fp;
    fp = fopen("hello.txt","r");
    
    if(fp == NULL)
    {
      fprintf(stdout,"\nUnable to open the file\n");
      exit(EXIT_FAILURE);
      }
      
      //fprintf(fp,"\n");
     //  fprintf(fp,"\nwe are doing good!fow about you");
      
      while((ch = getc(fp))!=EOF){
        putc(ch, stdout);
        sleep(2);
      
      
      
      
      fclose(fp);
      
      
      return 0;
 
 }

