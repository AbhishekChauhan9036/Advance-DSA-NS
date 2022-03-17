#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       queue<pair<int,int>> q;
      
       int r=image.size();
       int c=image[0].size();
        vector<vector<int>> vis(r,vector<int>(c,0));
       
       q.push({sr,sc});
       int p=image[sr][sc];
       image[sr][sc]=newColor;
       
       
       int dx[]={0,0,1,-1};
       int dy[]={1,-1,0,0};
       while(!q.empty()){
           int k=q.size();
           while(k--){
               int x=q.front().first;
               int y=q.front().second;
               q.pop();
               image[x][y]=newColor;
               for(int i=0;i<4;i++){
                   if(x+dx[i]>=r||x+dx[i]<0||y+dy[i]<0||y+dy[i]>=c||vis[x+dx[i]][y+dy[i]]==1){
                       continue;
                   }
                   if(image[x+dx[i]][y+dy[i]]==p){
                       vis[x+dx[i]][y+dy[i]]=1;
                       q.push({x+dx[i],y+dy[i]});
                   }
                   
                   
               }
           }
           
       }
       return image;
       
   }
};

// { Driver Code Starts.
int main(){
	int tc=1;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";

		}
	}
	return 0;
}  // } Driver Code Ends