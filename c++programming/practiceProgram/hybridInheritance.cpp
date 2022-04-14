/* demo on hybrid inheritance
*/


#include<iostream>

using namespace std;

class Employee
{
  protected:
     char emp_Name[20];
     int emp_Id;
  public:
     void getDetails()
     {
        cout<<"\nEnter EMployee Name and Employee Id : ";
        cin>>emp_Name>>emp_Id;
        }
      void printDetails()
      {
        cout<<emp_Name<<"\t"<<emp_Id<<endl;
        }
    };
    class Department : public Employee
    {
      protected:
          char dept_Name[20];
          public:
            void getDept()
            {
               cout<<"\nEnter the Employee Deparment : ";
               cin>>dept_Name;
               }
               void printDept()
               {
                  cout<<dept_Name<<endl;
                  }
             };
           class EmpAddress
           {
             protected:
               char emp_Add[40];
               public:
                  void getEmpAdd()
                  {
                      cout<<"\nEnter EMployee Address : ";
                      cin>>emp_Add;
                      }
                       void printEmpAdd()
                       {
                         cout<<emp_Add<<endl;
                         }
                         };
                         class Salary:public Department,public EmpAddress
                         {
                           protected:
                             float sal;
                             public:
                               void getSal()
                               {
                                 getDetails();
                                 getDept();
                                 getEmpAdd();
                                 cout<<"\nENter the employee salary: ";
                                 cin>>sal;
                                 }
                                   void printSal()
                                   {
                                     printDetails();
                                     printDept();
                                     printEmpAdd();
                                     cout<<sal<<endl;
                                     }
                                 };
                                 int main()
                                 {
                                   Salary s;
                                   s.getSal();
                                   s.printSal();
                                   }
          
       
