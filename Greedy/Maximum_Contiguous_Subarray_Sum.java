import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework
import java.util.Scanner;
import java.io.InputStreamReader;
// don't change the name of this class
// you can add inner classes if needed
class Main {
    public static void main(String[] args)throws IOException, IOException  {
        //  BufferedReader br = new BufferedReader(
        //         new InputStreamReader(System.in));
        // int t = Integer.parseInt(br.readLine());
        // for (int test = 0; test < t; test++) {
        //     int n = Integer.parseInt(br.readLine());
        //     int[] nums = new int[n];
        //  String srr[] = br.readLine().trim().split("\\s+");
        //     for (int i = 0; i < n; i++) {
        //         nums[i] = Integer.parseInt(srr[i]);
        //     }
        //     System.out.println(maxSubArray(nums));
        // }
        Scanner deepak = new Scanner(System.in);
        int t = deepak.nextInt();
        for (int test = 0; test < t; test++) {
            int n = deepak.nextInt();
            long[] nums = new long[n];
            for (int i = 0; i < n; i++) {
                nums[i] = deepak.nextLong();
            }
            System.out.println(maxSubArray(nums));
        }
    }
	public static long maxSubArray(long[] nums) {
        long gandoo = nums[0];
        long bhosadpappu = nums[0];
        int i = 1;
        while (i < nums.length) {
            bhosadpappu = Math.max(bhosadpappu + nums[i], nums[i]);
            gandoo= Math.max(gandoo, bhosadpappu);
            i++;
        }
        return gandoo;
    }
}