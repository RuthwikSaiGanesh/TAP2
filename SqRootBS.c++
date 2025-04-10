  //Write a program to find square root of a number where time complexity O(logn)[[[[this means Binary seacrh since time complexity is O(logn)]]]]
#include<iostreeam>
using namespace std;
int Sqroot(int n)
{
    int l=0;
    int h=n;
    while(;<=high)
    {
        int mid =(l+h)/2;
        int sq= mid*mid;
        if(sq == n)
        {
            return mid;
        }
        else if(sq > n)
        {
            h = mid-1;
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
    int n;
    cout<<"Enter the number to find square root: ";
    cin>>n;
    int result = Sqroot(n);
    if(result == -1)
    {
        cout<<"Square root not found";
    }
    else
    {
        cout<<"Square root of "<<n<<" is "<<result;
    }
    return 0;
}