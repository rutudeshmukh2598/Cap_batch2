#include<iostream>
using namespace std;

class student
{
   int id;
   char name[20];
   double fees;
   char address[20];
   
   public :
      student()  //default parameter
      {
         name="rutuja";
         fees=5000;
         }
         stdudent(int id,char name,double fees) //three parameterized constructor
         {
             this->id=id;
             this->name=name;
             this->fees=fees;
             }
             student(char name,char address)// two parameterized constructor
             
             {
               this->name=name;
               this->address=address;
               }
               void printData()
               {
                 cout<<"\nENter id : "<<id<<endl;
                 cin>>id;
                 cout<<"\nStudent name : "<<name<<endl;
                 cin>>name;
                 cout<<"\nStudent fees: "<<fees<<endl;
                 cin>>fees;
                 cout<<"\nStudent address: "<<address<<endl;
                 cin>>address;
                 }
    };
    int main()
    {
       student s;
       s.printData();
       s.printDat(1,"shubham",2500);
       s.printData("rutu","parbhani");
       }
               
        
             
            
      

