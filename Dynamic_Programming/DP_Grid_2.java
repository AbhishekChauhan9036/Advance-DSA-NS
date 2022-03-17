import java.util.*;
import java.lang.*;
import java.io.*;
class Main
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = 1;
        while(T-->0)
        {
            String[] input = new String[2]; 
            input = br.readLine().split(" "); 
            int m = Integer.parseInt(input[0]); 
            int n = Integer.parseInt(input[1]); 
            Solution ob = new Solution();
            System.out.println(ob.numberOfPaths(m,n));
        }
    }
}



class Solution
{
    long numberOfPaths(int m, int n)
    {
        // code here
        long dp[][] = new long[m][n];
        
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                
                if(i==0 && j==0)
                    dp[i][j] = 1;
                
                else{
                    long up = 0;
                    long left = 0; 
                    
                    if(i>0)
                        up = dp[i-1][j]%1000000007;
                    
                    if(j>0)
                        left = dp[i][j-1]%1000000007;
                        
                    dp[i][j] = up + left;
                }
            }
        }
        return dp[m-1][n-1]%1000000007;
    }
}