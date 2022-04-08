//demo on time and date
#include<iostream>
#include<ctime>

using namespace std;

int main()
{
   time_t now =time(0);
   
   cout<<"now ="<<now<<endl;
   
   char * dt =ctime(&now);
   cout<<"dt ="<<dt<<endl;
   
   tm *gmt = gmtime(&now);
   dt =asctime(gmt);
   cout<<"now st ="<<dt<<endl;
   
   cout<<"============================="<<endl;
   
   tm * ltm=localtime(&now);
   cout<<"Month ="<<ltm->tm_mon<<endl;
   cout<<"\n year = "<<ltm->tm_year<<endl;
   
   cout<<"\n Day ="<<ltm->tm_mday<<endl;
   
   cout<<"\n Time ="<<ltm->tm_hour<<endl;
   cout<<"\nMin = "<<ltm->tm_min<<endl;
   cout<<"\nsecs = "<<ltm->tm_sec<<endl;
   return 0;

}
