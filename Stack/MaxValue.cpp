//find MaxValue using array from Stack

#include<iostream>
#include<stack>
using namespace std;

void maxVlaue(int arr[], int n) {
    stack<int> s;
    for(int i=0;i<n;i++) {
        s.push(arr[i]);                                                          // Push each element onto the stack
    }
    int maxim =0;
    while(!s.empty()) {
        int top=s.top();                                                         // Get the top element of the stack
        maxim = max(top, maxim);                                                 // Update the maximum value if the top element is greater
        s.pop(); 
    }
    cout << "Maximum value in the stack: " << maxim << endl; 
}

int main()
{
    int arr[] = {14, 56164, 4, 44, 154};
    int n = sizeof(arr) / sizeof(arr[0]);                                       
    maxVlaue(arr, n);                                                           
    return 0;
}