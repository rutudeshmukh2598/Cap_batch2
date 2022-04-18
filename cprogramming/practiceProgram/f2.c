#include<stdio.h>


void Namste();
void Bonjour();

int main()
{

  printf("ENter f for french and i for indian : ");
  char ch;
   scanf("%c",&ch);
   
   if(ch=='i')
   {
   Namste();
   }
   else{
   Bonjour();
   }

  return 0;
  }
  
  void Namste()
  {
    printf("Namste\n");
    }
    void Bonjour()
    {
    
       printf("Bonjour\n");
       }
