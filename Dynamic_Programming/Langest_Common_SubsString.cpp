#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
class Solution{
    public:
   int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int maxi=0;
        for(int i=1 ; i<n+1 ; i++){
            for(int j=1 ; j<m+1 ; j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                //cout << i << " " << j << " " << dp[i][j] << endl;
                maxi = max(maxi,dp[i][j]);
            }
        }
        return maxi;
    }
};


int main()
{
    int t=1;
    while (t--)
    {
        int n, m; 
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;
        n=s1.size();
        m=s2.size();
        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}