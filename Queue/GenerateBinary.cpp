//11. Generate binary number from 1 to n using Queue.

#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
    int n;
    cout<<"no. of binary numbers to generate: ";
    cin>>n; 

    queue<string> q;
    q.push("1");

    for(int i=0;i<n;i++)
    {
        string current = q.front();
        q.pop();
        cout<<current<<endl; 

        q.push(current + "0");                                                  // Append "0" to the current binary number and push it to the queue
        q.push(current + "1");                                                   // Append "1" to the current binary number and push it to the queue
    }
    return 0;
}
