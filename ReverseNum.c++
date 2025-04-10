#include<iostream>
using namespace std;

int reverseUsingRecurrsion(int n,int reverse=0)
{
    if(n==0)
        return reverse;
    return reverseUsingRecurrsion(n/10, reverse*10+n%10);
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Reverse of the number is: "<<reverseUsingRecurrsion(n);
    return 0;
}