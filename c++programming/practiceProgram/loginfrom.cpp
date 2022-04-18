#include<iostream>
#include<cstring>
using namespace std;

void login();
void registration();
void forgot();

int main()
{
  int c;
  cout<<"\t\t\t_________________________________\n\n\n";
  cout<<"\t\t\t          Welcome to the login page         \n\n\n";
  cout<<"\t\t\t__________________   MENU    _________________\n\n";
  
  cout<<"\t| press 1 to LOGIN                 |"<<endl;
  cout<<"\t| press 2 to REGISTER              |"<<endl;
  cout<<"\t| press 3 if u forgot ur password  |"<<endl;
  cout<<"\n\t\t\t please enter your choice : ";
  cin>>c;
  cout<<endl;
  
  
  switch(c)
  {
      case 1:
      
            login();
            break;
            
      case 2:
           registration();
           break;
      case 3:
           forgot();
           break;
      case 4:
            cout<<"\t\t\t Thank You \n\n\n";
            break;
      default:
           cout<<"\t\t\t please select valid function \n"<<endl;
           }
           }
     void login()
     {
        int count;
        string userId,password,id,pass;
         cout<<"\t\t\t please enter the username and password : "<<endl;
         cout<<"\t\t\t USERNAME ";
         
         cin>>userId;
         cout<<"\t\t\t PASSWORD ";
         cin>>password;
         }
                         
            
