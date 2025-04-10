#include<iostream>
using namespace std;

void Z_O_S(int arr[], int n)
{
    int count =0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count++;
        }
        else{
            if(count>0)
            {
                temp=arr[i];
                arr[i]=0;
                arr[i-count]=temp;
            }
        }
    }
}
int main()
{
    int arr[10]={1,0,1,0,1,0,1,1,0,0};
    int n=10;
    Z_O_S(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}