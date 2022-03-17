#include<bits/stdc++.h>
using namespace std;

class Solution
{
    int lcs(string s1,string s2,int n,int m){
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0)
                    dp[i][j]=0;
                else if(s1[i-1]==s2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
    
    public:
    int shortestCommonSupersequence(string X, string Y, int m, int n){
        return (m+n)-lcs(X,Y,m,n);
    }
};


int main()
{   
    
    int t=1;

    cin >> t;
    while(t--){
    string X, Y;

	cin >> X >> Y;
	
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}