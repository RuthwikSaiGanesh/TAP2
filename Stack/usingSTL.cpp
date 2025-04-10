#include<iostream>
#include<stack>   
using namespace std;
int main()
{
    stack<int> s;                // Create a stack of integers
    s.push(10);                
    s.push(20);
    s.push(30);
    cout << "Top element: " << s.top() << endl; // Display the top element of the stack
    s.pop();                 
    cout << "Top element after pop: " << s.top() << endl; 

    if(s.empty())
    {
        cout<<"Stack is empty"<<endl; 
    }
    return 0;
}