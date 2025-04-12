//topDown Dynamic Programming approach

#include<iostream>
#include<vector>
using namespace std;

int fibonacii(int n, vector<int>&dp)
{
    if(n<=1)
    {
        return n;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = fibonacii(n-1, dp) + fibonacii(n-2, dp);
}
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    vector<int> dp(n+1, -1);   // Initialize dp array with -1 
    cout<<"Fibonacii of "<< n <<" is: "<<fibonacii(n, dp)<<endl;
    return 0;
}