//  Longest common subsequence of two strings using Memoization

int dp[101][101];

int LCS(string x, string y, int n, int m)
{
    if(n==0 or m==0)
    return 0;
    
    if(dp[n][m] != -1)
    return dp[n][m];
    
    if(x[n-1] == y[m-1])
    return dp[n][m] = 1+LCS(x, y, n-1, m-1);
    
    else
    return dp[n][m] = max(LCS(x, y, n-1,m),LCS(x, y, n, m-1));
    
}

// answer stores in the last row and column of the dp table
