import java.util.*;
public class MinimumCharactersToMakePalindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.println(minCharsToMakePalindrome(str));
    }
    private static int minCharsToMakePalindrome(String str) {
        String revStr = new StringBuilder(str).reverse().toString();
        String concat = str + "$" + revStr;
        int[] lps = new int[concat.length()];
        computeLPSArray(concat, lps);
        return str.length() - lps[lps.length - 1];
    }
    private static void computeLPSArray(String concat, int[] lps) {
        int len = 0;
        lps[0] = 0;
        for (int i = 1; i < concat.length(); i++) {
            while (len > 0 && concat.charAt(i) != concat.charAt(len)) {
                len = lps[len - 1];
            }
            if (concat.charAt(i) == concat.charAt(len)) {
                len++;
                lps[i] = len;
            } else {
                lps[i] = 0;
            }
        }
    }
}
