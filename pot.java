import java.util.*;

public class pot {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        long res = 0;
        while (n > 0) {
            res += process(scanner.nextInt());
            n--;
        }
        System.out.println(res);
    }

    public static long process(int n) {
        int power = n % 10;
        n /= 10;
        return multiplyNum(n, power);
    }

    public static long multiplyNum(int n, int k) {
        if (k == 0) {
            return 1;
        }
        return n * multiplyNum(n, k - 1);
    }
}
