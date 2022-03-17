import java.util.*;
import java.io.*;
import java.lang.*;
class Main
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(read.readLine());
        
        while(t-- > 0)
        {
            int n = Integer.parseInt(read.readLine());
            int w = Integer.parseInt(read.readLine());
            
            int val[] = new int[n];
            int wt[] = new int[n];
            
            String st[] = read.readLine().trim().split("\\s+");
            
         
            for(int i = 0; i < n; i++)
              val[i] = Integer.parseInt(st[i]);
             
            String s[] = read.readLine().trim().split("\\s+"); 
            
           
            for(int i = 0; i < n; i++)
              wt[i] = Integer.parseInt(s[i]);
            System.out.println(knapSack(w, wt, val, n));
        }
    }


static int knapSack(int W, int wt[], int val[], int n) 
    { 
        int [][]matrix=new int[n+1][W+1];

      for (int i = 0;i < matrix.length;i++){
	   for (int j = 0; j < matrix[i].length; j++) 
	   {
	       if(i==0 || j==0)
    	   matrix[i][j] = 0; 
	       
	   }}
	   for (int i = 1;i < n+1;i++)
	   {
    	   for (int j = 1; j < W+1; j++) 
    	   {
    	       if(wt[i-1]<=j)
    	       {
    	           matrix[i][j]=Math.max(val[i-1]+matrix[i-1][j-wt[i-1]],matrix[i-1][j]);
    	       }
    	       else
    	       matrix[i][j]=matrix[i-1][j];
    	      
    	   }
	   }
	   return matrix[n][W];
}
}