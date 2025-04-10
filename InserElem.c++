#include<iostream>
using namespace std;

insert_at_pos(int arr[],int n,int e,int p)
{
    if(p>n)
    {
        cout<<"Invalid position";
        return;
    }
    for(int i=n-1;i>=p-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[p-1]=e;
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6]={1,2,3,4,5};
    int n=6;
    int p=2;
    int e=8;
    insert_at_pos(arr,n,e,p);
    display(arr,n)    
   
    
}