//demo on string class

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char str1[20]={"\0"},str2[20]="cpp programming";
 
   
   string s1="Hello",s2="world!";
   string s3;
   s3=s1+s2;
   cout<<s1<<s2<<endl;
   
   cout<<"\ns3 = "<<s3<<endl;
   cout<<"\nLen of s3="<<s3.size()<<endl;
   getline(cin,s3);
   cout<<"New s3 = "<<s3<<endl;
   
   //append s3 with 'D' charachter
   s3.push_back('D');
   cout<<"New s3 ="<<s3<<endl;
   
   //delete a characer s3
   s3.pop_back();
   cout<<"New s3 ="<<s3<<endl;
   
   
   cout<<"\nCapacity of s3=\n"<<s3.capacity()<<endl;
   cout<<"\nLength of s3="<<s3.length()<<endl;
   
     cout<<strcpy(str1,str2)<<endl;
   
   return 0;

}
