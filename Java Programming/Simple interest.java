import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long P = sc.nextLong();
        long T = sc.nextLong();
        long R = sc.nextLong();

        long simpleInterest = (P * T * R) / 100;

        System.out.println(simpleInterest);

        sc.close();
    }
}
