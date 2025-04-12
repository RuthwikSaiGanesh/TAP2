//bottom up dynamic programming approach
#include<iostream>
#include<vector>
using namespace std;

int fib(int n)
{
    vector<int> dp(n+1);
    dp[0] =0;dp[1]=1;
    for(int i=2; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<< "Fibonacii of the number "<< n << " is "<< fib(n) << endl;
    return 0;
}