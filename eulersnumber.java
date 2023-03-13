import java.util.*;

public class eulersnumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        if (n == 0) {
            System.out.println(1);
            return;
        }
        double res = 1;
        double total = 1;
        for (int i = 1; i <= n; i++) {
            res = res / i;
            total += res;
        }
        System.out.println(total);
    }
}
