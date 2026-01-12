import java.util.*;
public class Main{
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        double b=sc.nextDouble();
        double c=sc.nextDouble();
        double d=sc.nextDouble();
        double pf=0.12*b;
        double g=b+c+d+pf;
        System.out.printf("%.2f
%.2f",pf,g);
    }
}
