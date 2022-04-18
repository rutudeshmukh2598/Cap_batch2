//static memeber

#include<iostream>
using namespace std;
class Hp_Printer
{
  static char name[20];
  public :
     void print()
     {
       cout<<"printer name: "<<name<<endl;
       cin>>name;
       }
       };
       int main()
       {
        cout<<"\nHp_Printer: "<<Hp_Printer->print()<<endl;
         
           
           }
