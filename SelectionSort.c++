#include<iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[mid];
        arr[mid]=temp;
    }
}

int main()
{
    




    return 0;
}