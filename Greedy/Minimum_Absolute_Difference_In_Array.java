import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

// don't change the name of this class
// you can add inner classes if needed
class Main {
	 public static void main (String[] args) {
        // Your code here
        Scanner deepak = new Scanner(System.in);
        int n = deepak.nextInt();
        long arr[] = new long[n];
        for ( int i = 0; i < n; i++){
            arr[i] = deepak.nextLong();
        }
        System.out.println(minimumAbsDifference(arr));
    }
    public static long minimumAbsDifference(long[] arr) {
       Arrays.sort(arr);

long minimumDifference = Integer.MAX_VALUE;

for (int i = 0; i < arr.length - 1; i++) {
    long difference = arr[i + 1] - arr[i];
    
    if (difference < minimumDifference) {
        minimumDifference = difference;
        
        if (minimumDifference == 0) {
            return 0;
        }
    }
}

return minimumDifference;
}
}