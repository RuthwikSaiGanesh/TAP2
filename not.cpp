#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(3,3);                     // Create a vector of integers

    for(int x:v)                   // Traverse and print the elements of the vector
    {
        cout<<x<<" ";
    }
    cout<<"\nSize of vector: "<<v.size()<<endl; // Print the size of the vector
return 0;
}