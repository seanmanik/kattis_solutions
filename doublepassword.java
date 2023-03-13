import java.util.*;

public class doublepassword {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String a = scanner.nextLine();
        String b = scanner.nextLine();
        int total = 1;
        for (int i = 0; i < 4; i++) {
            if (a.charAt(i) != b.charAt(i)) {
                total = total << 1;
            }
        }
        System.out.println(total);
    }
}
