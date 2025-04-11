//10. Write a program to reverse a string using Queue. [can use stl operations]

#include<iostream>
#include<queue>
#include<stack>
#include<string>
using namespace std;

void reverseString(string str)
{
    queue<char> q;
    stack<char> s;
    for(char ch : str)
    {
        q.push(ch); // Push each character onto the queue
        
    }
    while(!q.empty())
    {
        s.push(q.front());                    //push function doesn't work in ******cout<<******
        q.pop();  
    }
    string reversed ="";
    while(!s.empty())
    {
        reversed += s.top();                  // Pop characters from the stack and append them to the reversed string
        s.pop();
    }
    cout<<reversed <<endl; 
}

int main()
{
    cout<<"Enter your string: "<<endl;
    string str;
    cin>>str;    
    reverseString(str);
    return 0;
}