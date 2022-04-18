#include<iostream>
using namespace std;

//overriding demo

class Student
{
   private:
     char stud_name[20];
     int stud_id;
   public:
       void print(char stud_name,int stud_id)
       {
          cout<<"\nEnter sutdent name: "<<endl;
          cin>>stud_name;
          cout<<"\nEnter student id: "<<endl;
          cin>>stud_id;
          }
           void printData()
           {
              cout<<stud_name<<endl;
              cout<<stud_id<<endl;
              }
         };
         class Employee :public Student
         {
            private :
                  char emp_name[20];
                  int emp_id;
                  public:
                      void print(char emp_name,int id)
                      {
                          print(char ,int);
                         cout<<"\nEnter Employee name : ";
                         cin>>emp_name;
                          cout<<"\nEnter employee id : ";
                        cin>>emp_id;
                        }
                        void printData()
                        {
                           printData();
                           
                           cout<<emp_name<<endl;
                           
                           cout<<emp_id<<endl;
                           }
                     };
                     int main()
                     {
                        
                         
                        Employee emp;
                        emp.print();
                        emp.printData();
                        }      
                           
                        
