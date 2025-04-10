#include<iostream>
using namespace std;

int main()
{
    int *ptr = new int;             // allocate memory for an integer   
    *ptr=10;
    cout<<"Value of ptr is: "<<*ptr<<endl;      
    delete ptr;                                 //free the memory allocated to ptr
    return 0;
}