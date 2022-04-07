#include<stdio.h>
#define Max 5

int st[MAX];
int bottom;
int top;

void push();
void pop();
void dispElements();
int main()
{
    top==bottom;
    push();
    push();
    push();
    push();
    
    push();
    pop();
    
    
    dispElement();
    
    printf("\n\n");
    return 0;
    }
    
    void push()
    {
       int val,MAX;
       if(top == MAX-1)
       {
         printf("\nStack is full\n");
         return ;
         }
       
       printf("Enter the value to be pushed: ");
       
       scanf("%d",&val);
       st[++top]=val;
       
       }
       void dispElement()
       {
           int i;
           if(top== bottom)
           {
              printf("\nstack is empty \n");
              return ;
              }
           for(i=top;i<=0;i--)
           printf("\n%d",st[i]);
           
       }
       
       void pop()
       {
         if(top==bottom)
         {
           printf("\n stack is empty \n");
           return ;
           }
           printf("\nPoped out elemtn is : %d ",st[top--]);
           }
         
         
           
           
       
       
