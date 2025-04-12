#include<iostream>
#include<string>
#include<vector>
using namespace std;

int lcs(string X, string Y)
{
    int n =X.size();
    int m =Y.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0)); // Initialize dp array with 0 [ way to create 2D array in c++]

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(X[i-1] == Y[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1]; // If characters match, add 1 to the result of the previous characters
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]); // If characters don't match, take the maximum of the two possibilities
            }
        }
    }
    return dp[n][m]; // The length of the longest common subsequence is in the bottom-right cell of the dp array
}

int main()
{
    string X,Y;
    cout<<"Enter the string X :"<<endl;
    cin>>X;
    cout<<"Enter the string Y :"<<endl;
    cin>>Y;
    cout<<"Length is : "<<lcs(X,Y)<<endl;
    return 0;
}