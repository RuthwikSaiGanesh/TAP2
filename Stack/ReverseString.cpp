//write a program to reverse a string using stack     [use STL]

#include<iostream>
#include<stack>
using namespace std;

void reverseString(string str)
{
    stack<char> st;
    for(char ch : str) {
        st.push(ch);                                            // Push each character onto the stack
    }
    while(!st.empty())
    {
        cout<<st.top();                                       // Pop characters from the stack and print them
        st.pop();
    }
}

int main()
{
    cout<<"Enter your string: "<<endl;
    string str;
    cin>>str;    
    reverseString(str);
    return 0;
}