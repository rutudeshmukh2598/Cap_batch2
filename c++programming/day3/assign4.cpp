#include <iostream>
#include <queue>
using namespace std;
 

int main()
{
    queue<string> q;
 
    q.push("abc");       
    q.push("def");   
    q.push("jkl");        
    q.push("pqr");

    cout << "The queue size is: " << q.size() << endl;
 
   
    cout << "The front element is: " << q.front() << endl;
 
    
    cout << "The rear element is: " << q.back() << endl;
 
    q.pop();           
    q.pop();           
 
    cout << "The queue size is: " << q.size() << endl;
 
  
    if (q.empty()) {
        cout << "The queue is empty\n";
    }
    else {
        cout << "The queue is not empty\n";
    }
 
    return 0;
}
