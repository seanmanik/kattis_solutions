import java.util.*;

public class sumkindofproblem {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int tc = scanner.nextInt();
        for (int j = 1; j <= tc; j++) {
            int k = scanner.nextInt();
            int n = scanner.nextInt();
            int s1 = 0;
            int s2 = 0;
            int s3 = 0;
            for (int i = 1; i <= n; i++) {
                s1 += i;
            }
            for (int i = 1; i <= n; i++) {
                s2 += (2 * i - 1);
            }
            for (int i = 1; i <= n; i++) {
                s3 += (2 * i);
            }
            System.out.println(k + " " + s1 + " " + s2 + " " + s3);
        }
    }
}
