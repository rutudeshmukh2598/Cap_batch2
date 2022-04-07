/*

demo linked list
*/
#include<stdio.h>
 
 struct list
 {
   int val;
   struct list *ptr;
   };
   
   typedef struct list LIST;
   
   int main()
   {
     LIST n1,n2,n3,n4;  //create a variable
     LIST *pn;
     LIST temp;
     
     
     
     n1.val=10;
     n1.ptr=NULL;   //ground
     
     n2.val=20;
     n2.ptr=NULL;
     
     n3.val=30;
     n3.ptr=NULL;
     
     n1.ptr=&n2; 
     n2.ptr=&n3;
     head=&n 1;
     temp=head;
     
     display(temp);
     
     n4.val=40;
     n4.ptr=NULL;
     
     n1.ptr=&n4;
     n4.ptr=&n2;
     
     temp=head;
     
     printf("\nAfter inserting new node n4\n");
     dispList(temp);
     
     
     
     
     printf("\n\n");
     return 0;
     }
     void dispList(LIST *h)
     {
     printf("\nLinked list is: \n");
     while(h!=NULL)
     {
       printf("%d->",h->val);
       h=h->ptr;
       }
       dispList(temp);
       
