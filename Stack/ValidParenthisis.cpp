#include<iostream>
#include<stack>
using namespace std;

bool ValidParanthesis(string str)
{
    stack<char> s;
    for(char ch : str)
    {
        if(ch == '(' || ch == '{' || ch == '[') 
        {
            s.push(ch);
        }
        else
        {
            if(s.empty())
            {
                return false;
            }
            char top = s.top();
            if(ch == ')' && top != '(' || ch == '}' && top != '{' || ch == ']' && top != '[')
                return false;
            s.pop();
        }
    }
    return s.empty();
}

int main()
{
    string s = "}{)(][";
    if(ValidParanthesis(s))
        cout << "Valid Parenthesis" << endl;
    else
        cout << "Invalid Parenthesis" << endl;
    return 0;
}