import java.util.*;

public class hissingmicrophone {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        boolean hiss = false;
        boolean prev = false;
        for (int i = 0; i < s.length(); i++) {
            if (hiss) {
                System.out.println("hiss");
                return;
            }
            if (s.charAt(i) == 's') {
                if (prev) {
                    hiss = true;
                } else {
                    prev= true;
                }
            } else {
                if (prev) {
                    prev = false;
                }
            }
        }
        if (hiss) {
            System.out.println("hiss");
            return;
        }
        System.out.println("no hiss");
    }
}
