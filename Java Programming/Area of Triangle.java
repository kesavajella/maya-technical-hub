import java.util.*;
import java.lang.Math;
public class main {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        double a=sc.nextDouble();
        double b=sc.nextDouble();
        double c=sc.nextDouble();
        double s=(a+b+c)/2;
        double r=Math.sqrt(s*(s-a)*(s-b)*(s-c));
        System.out.printf("%.2f",r);
    }
}
