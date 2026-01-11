import java.util.*;
import java.lang.Math;
public class Main{
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        double a=sc.nextDouble();
        double b=Math.sqrt(a);
        int c=(int)b;
        if(c*c==a) {
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
    }
}
