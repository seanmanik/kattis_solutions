import java.util.*;

public class avion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = 5;
        boolean present = false;
        for (int k = 0; k < n; k++) {
            String s = scanner.nextLine();
            for (int i = 0; i < s.length() - 2; i++) {
                if (s.charAt(i) == 'F' && s.charAt(i + 1) == 'B' && s.charAt(i + 2) == 'I') {
                    present = true;
                    System.out.println(k + 1);
                    break;
                }
            }
        }
        if (!present) {
            System.out.println("HE GOT AWAY!");
        }
    }
}
