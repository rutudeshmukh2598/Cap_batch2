#include<stdio.h>
#define Max 5

int Q[MAX];
int front;
int rear;

void enqueue();
void dequeue();
void dispElements();

int main()
{
  
   front =0;
   rear=front;
   
   rear=0;
    printf("\n\n");
    return 0;
    }
    
    void enqueue()
    {
       if(rear == MAX-1)
       {
          printf("\nQueue is full\n");
          return;
          }
          
          printf("\nEnter the value to be enqueued: ");
          scanf("%d",&val);
          Q[rear++]=val;
          }
       void enqueue()
    {
    //pop pull operation
       if(front ==rear)
       {
          printf("\nQueue is empty\n");
          return;
          }
          
          for(i=front;i<rear;i++)
          {
            
          
          
