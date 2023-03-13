import java.util.*;

public class laptopsticker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int wc = scanner.nextInt();
        int hc = scanner.nextInt();
        int ws = scanner.nextInt();
        int hs = scanner.nextInt();
        if (wc - ws > 1) {
            if (hc - hs > 1) {
                System.out.println(1);
                return;
            }
        }
        System.out.println(0);
    }
}
