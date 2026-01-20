import java.util.*;
public class Main{
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        double c,b,s=0;
        if(a<200) {
            c=1.20;
            b=a*c;
        }
        else if(a>=200 && a<400) {
            c=1.40;
            b=a*c;
        }
        else if(a>=400 && a<600) {
            c=1.60;
            b=a*c;
        }
        else if(a>=600 && a<800) {
            c=1.80;
            b=a*c;
        }
        else {
            c=2.00;
            b=a*c;
        }
        if(b>400) {
            s=0.15*b;
        }
        System.out.printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",a,c,b,s,b+s);
    }
}
