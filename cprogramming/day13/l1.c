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
     LIST n1,n2,n3;  //create a variable
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
     
     pn=&n1;
     printf("\n%d",n1.val);
     printf("\n %d->",pn->val);
     
    // pn=&n2;
   // pn=n1.ptr;
     temp = temp->ptr;
     
     printf("\n %d->",temp->val);
     
     //pn=&n3;
     //pn=n2.ptr;
     temp=temp->ptr;
     
     printf("\n %d->",temp->val);
     printf("\nNULL\n");
     if(temp==NULL){
     
     printf("\nReached to the end of list");
     printf("\nReprinting the list using loop\n");
     
     temp=head;
     
     while (temp!=NULL)
     printf("\n%d",temp->val);
     temp=temp
     
     }
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
       
