import java.util.*;

public class eyeofsauron {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        int len = s.length();
        int target = 0;
        for (int i = 0; i < len; i++) {
            if (s.charAt(i) == '(') {
                break;
            }
            target++;
        }
        int right = len - target - 2;
        if (right == target) {
            System.out.println("correct");
        } else {
            System.out.println("fix");
        }
    }
}
