#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"Front element: "<< q.front()<<endl; // Access the front element
    cout<<"Back element: "<< q.back()<<endl; // Access the back element

    q.pop();

    cout<< "Front element after popping :"<< q.front()<<endl; // Access the front element after popping

    cout<<"Queue elements:";
    while(!q.empty())
    {
        cout<< q.front()<< " "; // Display the elements in the queue
        q.pop(); // Remove the front element
    }
    cout<<endl;
    return 0;
}