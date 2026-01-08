import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double P = sc.nextDouble(); 
        double R = sc.nextDouble(); 
        double T = sc.nextDouble();
        double A = P * Math.pow((1 + R / 100), T);
        System.out.printf("%.2f", A);
    }
}
