#include <iostream>
using namespace std;
class Employee 
{
   public:
       int id;
       string name;
       float salary;
    Employee (int i, string n, float s)
     {
         id = i;
        name = n;
        salary = s;
       
      }
  void display ()
  {
     cout<<id<<" "<<name<<" "<<salary<<endl;
     
    }
};
int main(void) {
     cout<<"\nEMployee Details :\n";
   Employee e1=Employee(10, "shubham", 90000);
   Employee e2=Employee(11, "rutuja", 60000);
   Employee e3=Employee(12,"Kaivalya",75000);
   e1.display();
   e2.display();
   e3.display();
   return 0;
}
