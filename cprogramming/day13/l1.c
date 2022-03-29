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
    pn=n1.ptr;
     
     printf("\n %d->",pn->val);
     
     //pn=&n3;
     pn=n2.ptr;
     printf("\n %d->",pn->val);
     
     
     
     
     printf("\nNULL\n");
     
     }
