import java.util.*;
public class Main{
    public static void main(String  args[]) {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int y=sc.nextInt();
        int c=y*2;
        if(x>=c) {
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
