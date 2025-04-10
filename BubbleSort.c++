#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<arr[i];
    }
}
int main()
{
    int n,i;
    cout<<"Enter the number of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    BubbleSort(arr,n);
    return 0;
}