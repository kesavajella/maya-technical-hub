import java.util.*;
public class MaximumSumCircularSubarray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] A = new int[n];
        for (int i = 0; i < n; i++) {
            A[i] = sc.nextInt();
        }
        System.out.println(maximumSumCircularSubarray(A));
    }
    public static int maximumSumCircularSubarray(int[] A) {
        int totalSum = 0;
        int maxKadane = kadane(A);
        if (maxKadane < 0) return maxKadane;
        for (int i = 0; i < A.length; i++) {
            totalSum += A[i];
            A[i] = -A[i];
        }
        int minSubarray = kadane(A);
        int maxWrap = totalSum + minSubarray;
        return Math.max(maxKadane, maxWrap);
    }
    public static int kadane(int[] A) {
        int maxSoFar = A[0];
        int maxEndingHere = A[0];
        for (int i = 1; i < A.length; i++) {
            maxEndingHere = Math.max(A[i], maxEndingHere + A[i]);
            maxSoFar = Math.max(maxSoFar, maxEndingHere);
        }
        return maxSoFar;
    }
}
