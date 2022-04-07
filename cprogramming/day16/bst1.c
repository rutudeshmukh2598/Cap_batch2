#include<stdio.h>
#include<stdio.h>

struct bst
{
   
   struct bst *lchild;
   int val;
   struct bst *rchild;
   };
   
   typedef struct bst BST;
   BST *newNOde(int);
   
   
   BST *insert(BST *,int);
   
   void postorder(BST *);
   
   void inorder(BST *);
   void preorder(BST *);
   
   int main()
   {
      int a[]={50,20,80,10,40,60,70};
      int i;
      BST *root =NULL;
      for(i=0;i<(sizeof(a)/sizeof(a[0]));i++);
      root =insert(root,a[i]);
      printf("\n=====Inorder Traversal\n============");
      inorder(root);
      
     // printf("\n=====preorder Traversal\n============");
     // preorder(root);
      
      //printf("\n=====postorder Traversal\n============");
    //  postorder(root);
      
      
      insert()
      printf("\n\n");
      return 0;
  }
  
  BST *insert(int val)
  {
       BST *nn=(BST *)malloc(sizeof(BST));
       if(nn==NULL)
       {
          printf("\nUnable to allocate memory\n");
          exit(EXIT_FAILURE);
          }
          nn->val=value;
          nn->lchild=nn->rchild=NULL;
          return (nn);
  
  } 
  BST *insert(BST *root,int val)
  {  
      if(root==NULL)
      return newNode(root ,val);
      else if(val< root ->val)
      root ->child=insert(root->lchild,val);
      else
      root->rchild=insert(root->rchild,val);
     }
     void inorder(BST *root)
     {  
        if(root!=NULL)
        {
           inorder(root->lchild);
           printf(" %d ",root->val);
           inorder(root->rchild);
     
     }
    
      
   
   
   
