//Rule 1 : Array should be sorted from ascending to descending

#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int key=5;
    int result=binary_search(arr,n,key);
    if(result==-1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element found at index "<<result;
    }
    return 0;
}