import java.util.*;
public class Contest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long T = sc.nextLong();
        while (T-- > 0) {
            long N = sc.nextLong();
            long A = sc.nextLong();
            long B = sc.nextLong();
            long K = sc.nextLong();
            long countA = N / A;
            long countB = N / B;
            long countAB = N / lcm(A, B);
            long totalProblems = countA + countB - countAB;
            if (totalProblems >= K) {
                System.out.println("Win");
            } else {
                System.out.println("Lose");
            }
        }
        sc.close();
    }
    private static long lcm(long a, long b) {
        return (a / gcd(a, b)) * b;
    }
    private static long gcd(long a, long b) {
        while (b != 0) {
            long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}
