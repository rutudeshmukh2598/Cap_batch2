//demo pointer to a pointer

#include<iostream>
using namespace std;

int main(int argc,char const *argv[])
{
    int value =100;
    int *ptr=NULL;
    int **pptr=NULL;
    ptr =&value;
    
    cout<<"ptr/value = "<<*ptr<<endl;
       pptr =&ptr;
     
       cout<<"\nadd of &ptr ="<<&ptr<<endl;
       cout<<"pptr/value = "<<*pptr<<endl;
   
    return 0;
    }
    

