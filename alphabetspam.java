import java.util.*;

public class alphabetspam {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        int symbols = 0;
        int whitespace = 0;
        int upper = 0;
        int lower = 0;
        int len = s.length();
        for (int i = 0; i < len; i++) {
            char c = s.charAt(i);
            if (c == '_') {
                whitespace++;
            } else if (c >= 65 && c <= 90) {
                upper++;
            } else if (c >= 97 && c <= 122) {
                lower++;
            } else {
                symbols++;
            }
        }
        double ratioWhitespace = (double) whitespace / (double) len;
        double ratioLower = (double) lower / (double) len;
        double ratioUpper = (double) upper / (double) len;
        double ratioSymbols = (double) symbols / (double) len;
        System.out.println(ratioWhitespace);
        System.out.println(ratioLower);
        System.out.println(ratioUpper);
        System.out.println(ratioSymbols);
    }
}
