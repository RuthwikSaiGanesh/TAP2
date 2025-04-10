#include<iostream>
using namespace std;

int LinerSerachRecurrsion(int arr[], int size, int key, int index=0)
{
    if(index==size)
        return false;
    if(arr[index]==key)
        return index;
    return LinerSerachRecurrsion(arr,size,key,index+1);
}
int main()
{
    int size ,key;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key element :";
    cin>>key;
    int result = LinerSerachRecurrsion(arr,size,key);
    if(result)
    {
       cout<<"Element found at index: "<<result<< endl;
    }
    else
    {
        cout<<"Element not found";
    }
}