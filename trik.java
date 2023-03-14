import java.util.*;

public class trik {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        int curr = 1;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (curr == 1) {
                if (c == 'A') {
                    curr = 2;
                } else if (c == 'C') {
                    curr = 3;
                }
            } else if (curr == 2) {
                if (c == 'A') {
                    curr = 1;
                } else if (c == 'B') {
                    curr = 3;
                }
            } else if (curr == 3) {
                if (c == 'B') {
                    curr = 2;
                } else if (c == 'C') {
                    curr = 1;
                }
            }
        }
        System.out.println(curr);
    }
}
