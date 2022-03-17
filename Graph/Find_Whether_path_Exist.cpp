#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool checkForAPath(vector<vector<int>>& grid,vector<vector<bool>> &visited, int rows, int cols, int x, int y){
        if(x < 0 || x >= rows || y < 0 || y >= cols){
            return false;
        }
        if(visited[x][y] == true || grid[x][y] == 0){
            return false;
        }
        if(grid[x][y] == 2){
            return true;
        }
        visited[x][y] = true;
        return checkForAPath(grid, visited,rows, cols,x - 1, y) ||checkForAPath(grid, visited,rows, cols,x + 1, y)||checkForAPath(grid, visited,rows, cols,x, y + 1)||checkForAPath(grid, visited,rows, cols,x , y - 1);
    }
    
    
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int rows = grid.size();
        int cols = grid[0].size();
        int x = 0;
        int y = 0;
        for(int i = 0; i < grid.size();i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    x = i;
                    y = j;
                }
            }
        }
        vector<vector<bool>> visited;
        for(int i = 0; i < rows; i++){
            vector<bool> v (cols, false);
            visited.push_back(v);
        }
        return checkForAPath(grid, visited, rows, cols, x, y);
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	tc=1;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends