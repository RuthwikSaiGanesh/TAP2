#include<iostream>
using namespace std;

int even_odd_length(int arr[], int n)
{
    int count =1,maximum=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]%2==0)&&(arr[i-1]%2!=0)||(arr[i]%2!=0)&&(arr[i-1]%2==0))
        {
            count++;
            maximum = max(count,maximum);
        }
        else
        {
            count = 1;
        }
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    cout<<even_odd_length(arr,n);
    return 0;
}