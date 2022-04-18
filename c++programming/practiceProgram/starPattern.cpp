 #include<iostream>
 
 using namespace std;
 
 int main()
 {
    int num=5;
    int i,j;
    
    for(i=1;i<=num;i++)
    {
       for(j=1;j<=num;j++)
       {
          if(j == 1 || i == j || i == num)
          {
             cout<<"* ";
             }
             
             else
             {
             cout<<" ";
             }
             cout<<"\n";
             
       }
       }
   }    
