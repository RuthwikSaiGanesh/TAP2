#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;                     // Create a vector of integers
    v.push_back(10);                   // Add elements to the vector
    v.push_back(20);
    v.push_back(30);
    cout << "Elements in the vector: ";
    for (int i = 0; i < v.size(); i++) {                   // Traverse and print the elements of the vector
        cout << v[i] << " ";
    }
    cout<<"\nSize of vector: "<<v.size()<<endl; // Print the size of the vector
    v.pop_back();                  // Remove the last element from the vector
    cout << "Elements after pop_back: ";

    for (int i = 0; i < v.size(); i++) {                   // Traverse and print the elements of the vector
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}