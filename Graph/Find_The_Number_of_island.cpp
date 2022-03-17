#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
 public:
   // Function to find the number of islands.
   void dfs(vector<vector<char>>& g,int vis[][501],int i,int j,int n,int m){
     if(i<0 || j<0 || i>=n || j>=m){
         return;
     }  
     if(g[i][j]=='0'){
         return;
     }
     
     if(!vis[i][j]){
         vis[i][j]=1;
         dfs(g,vis,i+1,j,n,m);
         dfs(g,vis,i-1,j,n,m);
         dfs(g,vis,i,j+1,n,m);
         dfs(g,vis,i,j-1,n,m);
         dfs(g,vis,i+1,j+1,n,m);
         dfs(g,vis,i+1,j-1,n,m);
         dfs(g,vis,i-1,j+1,n,m);
         dfs(g,vis,i-1,j-1,n,m);
     }
   }
   int numIslands(vector<vector<char>>& grid) {
       // Code here
       int vis[501][501];
       memset(vis,0,sizeof(vis));
       int c=0;
       for(int i=0;i<grid.size();i++){
           for(int j=0;j<grid[0].size();j++){
               if(!vis[i][j] && grid[i][j]=='1'){
                   c++;
                   dfs(grid,vis,i,j,grid.size(),grid[0].size());
               }
           }
       }
       return c;
   }
};
 
// { Driver Code Starts.
int main() {
    int tc;
    tc=1;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends