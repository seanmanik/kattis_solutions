import java.util.*;

public class lastfactorialdigit {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        while (n > 0) {
            int k = scanner.nextInt();
            int curr = 1;
            while (k > 1) {
                curr *= k;
                k--;
            }
            System.out.println(curr % 10);
            n--;
        }
    }
}
