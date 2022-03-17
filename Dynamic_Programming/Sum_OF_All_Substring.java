import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
    public static long sumSubstrings(String s){

        int n = s.length(); 
        int m = 1000000007;
        long dp[]=new long[n+1];
        dp[0] = 0;
        dp[1] = (s.charAt(0)-'0');
        long res = dp[1];
        
        for(int i=2;i<=n;i++)
        {
            dp[i] = ((dp[i-1]*10)%m + ((s.charAt(i-1)-'0')*i)%m)%m;
            res = (res + dp[i])%m;
            
        }
        return res;
    }
	public static void main (String[] args)throws IOException {
         BufferedReader br = new BufferedReader(
            new InputStreamReader(System.in));

        String s=br.readLine();

        System.out.print(sumSubstrings(s));
	}
}