import java.util.*;
import java.lang.Math.*;

public class happyprime {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            int tc = scanner.nextInt();
            int m = scanner.nextInt();
            boolean happy = process(m);
            if (happy) {
                System.out.println(tc + " " + m + " " + "YES");
            } else {
                System.out.println(tc + " " + m + " " + "NO");
            }
        }
    }

    public static boolean process(int m) {
        if (m == 1 || m == 0) {
            return false;
        }
        if (!isPrime(m)) {
            return false;
        }
        HashSet<Integer> hs = new HashSet<>();
        int curr = m;
        int sum = 0;
        while (true) {
            sum = 0;
            while (curr > 0) {
                int digit = curr % 10;
                sum += (digit * digit);
                curr /= 10;
            }
            if (sum == 1) {
                return true;
            }
            if (hs.contains(sum)) {
                return false;
            }
            hs.add(sum);
            curr = sum;
        }

    }

    public static boolean isPrime(int m) {
        int k = (int) Math.sqrt((double) m);
        if (m == 2) {
            return true;
        }
        if (m % 2 == 0) {
            return false;
        }
        for (int i = 3; i <= k; i++) {
            if (m % i == 0) {
                return false;
            }
        }
        return true;
    }
}
