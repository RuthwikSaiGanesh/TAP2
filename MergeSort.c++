#include<iostream>
using namespace std;

void MergeSort(int arr[],int left, int right)
{
    if(left<right)
    {
        int mid = left+(right-left)/2;
        MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,right);
        Merge(arr,left,mid,right);
    }
}
void Merge(int arr[],int left,int mid, int right)
{
    int size1=mid-left+1;
    int n2 =right-mid;
    int leftArr[size1], rightArr[size2];
    for(int i=0;i<size1;i++)
    {
        leftArr[i]=arr[left+i];
    }
    for(int j=0;j<size2;j++)
    {
        rightArr[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=left;

    while(i<size1 && j<size2)
    {
        if(leftArr[i]<=rightArr[j])
        {
            arr[k]=leftArr[i++];
        }
        else
        {
            arr[k]=rightArr[j++];
        }
    }
    while(i<size1)
    {
        arr[k++]=leftArr[i++];
    }
    while(j<size2)
    {
        arr[k++]=rightArr[j++];
    }

}
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    MergeSort(arr,0,size-1);
    cout<<"Sorted array is: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}