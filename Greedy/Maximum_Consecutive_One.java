import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
    public static void main (String[] args) {
        // Your code here
        Scanner deepak = new Scanner(System.in);
        int n = deepak.nextInt();
        int k = deepak.nextInt();
        int [] arr = new int [n];
        for ( int i = 0; i < n; i++){
            arr[i] = deepak.nextInt();
        }
        System.out.print(maxConsecutiveOne(arr,k));
    }
    public static int maxConsecutiveOne(int[] arr, int k) {
        int countOnes = 0;
        int start = 0;
        int end = 0;
        int t = 0;

        while (end < arr.length) {
            while (end < arr.length && t <= k) {
                if (arr[end] == 0) {
                    t++;
                }
                if (t <= k) {
                    countOnes = Math.max(countOnes, end - start + 1);
                }
                end++;
            }
            if (arr[start] == 0) {
                t--;
            }
            start++;
        }
        return countOnes;
    }
}