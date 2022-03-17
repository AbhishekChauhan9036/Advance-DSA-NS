import java.util.*;
import java.io.*;
class Main{
 public static void main (String[] args)throws IOException
     {
  		BufferedReader br = new BufferedReader(
            new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
       //this code is done by Deepak thakur Nov batch 02
      while(t-- > 0){
          
          int n = Integer.parseInt(br.readLine());
          int arr[] = new int[n];
          String srr[] = br.readLine().trim().split("\\s+");
          for(int i = 0; i < n; ++i)
               arr[i] = Integer.parseInt(srr[i]);
          
          System.out.println(FindMaxSum(arr, n));
     }
   }
    public static int FindMaxSum(int arr[], int n)
    {
        int dp[] = new int[n+1];
          dp[0] = 0;
          dp[1] = arr[0];

        for (int i = 2; i < dp.length; i++) {
//this code is done by Deepak thakur Nov batch 02
            dp[i] = dp[i-1];
            dp[i] = Math.max(dp[i], arr[i-1]+dp[i-2]);
        }
        return dp[n];
    }
}