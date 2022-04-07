#include<stdio.h>
#include<stdlib.h>


typedef struct llist
{
  int val;
  struct llist *next;
  }llist;
  
  void dispList(LList *);
  
  int main()
  {
  
     LList *newNode=NULL, *head=NULL,*temp=NULL;
     int ch=1,value;
     while(ch)
     {
       printf("\nEnter the value of the new NOde: ");
       scanf("%d",&value);  
     
     }
       newNode=(LList *)malloc(sizeof(LList));
       if(newNode ==Null)
       {
        
         printf("\nUnable to allocate memmory\n");
         exit(EXIT_FAILURE);
         }
          newNode->val=value;
          newNode->next=NULL;
          
          printf("\n do u want to add new node: ");
          
          printf("%d",&ch);
          }
          
     
     }
  }
  void dispList(LLIST *head)
  {
    printf("\n ========List======\n;
    while(head !=NULL)
    {
    
