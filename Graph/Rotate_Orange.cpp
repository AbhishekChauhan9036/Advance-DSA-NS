#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    bool isvalid(int x, int y, int row, int col){
       if(x<0 || y<0 || x>=row || y>=col) return false;
       return true;
   }
   int orangesRotting(vector<vector<int>>& grid) {
       // Code here
       int row = grid.size(), col = grid[0].size(), t=0, fresh =0;
       queue<pair<int, int>>q;
       for(int i =0; i<row; ++i){
           for(int j =0; j<col; ++j){
               if(grid[i][j]==2) q.push({i,j});
               else if(grid[i][j]==1) fresh++;
           }
       }
       int dx[4] = {0, 1, 0, -1};
       int dy[4] = {1, 0, -1, 0};
       while(!q.empty()){
           t++;
           int size = q.size();
           for(int i =0; i<size; ++i){
               int x = q.front().first;
               int y = q.front().second;
               q.pop();
               for(int j =0; j<4; ++j){
                   int xdx = x + dx[j];
                   int ydy = y + dy[j];
                   if(isvalid(xdx, ydy, row, col) && grid[xdx][ydy]==1){
                       grid[xdx][ydy] =2;
                       fresh--;
                       q.push({xdx, ydy});
                   }
               }
           }
           if(fresh==0) return t;
       }
       return -1;
   }
};

// { Driver Code Starts.
int main(){
	int tc;
	// cin >> tc;
	tc=1;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends