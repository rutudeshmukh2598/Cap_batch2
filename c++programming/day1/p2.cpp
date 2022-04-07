#include<iostream>

using namespace std;

int swap_value(int,int)

void swap_value(int ,int)
void swap_ptr(int *,int *);
void swap_ref(int &,int &);
void swap_default(int,int);

int main()
{
   int ch=1;
   int a,b;
   cout<<"\nEnter the values of a and b: ";
   cin>>a>>b;
   while(1)
   {
   
      //call by value
      cout<<"\n1. call by value";
      cout<<"\n2.call by address/pointer";
     cout<<"\n3.call by reference");
      cout<<"\n4.call by default argument ";
      
      cout<<"\n0.Exit";
      cout<<"\nChoice: ";
      cin>>ch;
      
      switch(ch)
      {
         case 1:
             cout<<"\nBefor swaping values of a and b are \n";
             cout<<"a= "<<a<<" b = " <<b<<endl;
               swap_value();
               cout<<"\ncall by value";
               cout<<"\n after swAping values of a and b are \n";
             cout<<"a= "<<a<<" b = " <<b<<endl;
               break;
         case 2:
         cout<<"\n call by address and pointer"<<endl;
         
          cout<<"\nBefor swaping values of a and b are \n";
             cout<<"a= "<<a<<" b = " <<b<<endl;
                swap_value();
                break;
                
          case 3:
                swap_value();
                break;
           case 4:
                swap_value();
                break;
          case 0:
                cout<<"\nProgram ended successfully"<<endl;
                exit(EXIT_SUCCESS);
                break;
           default:
                             
      
      
      }
      }
