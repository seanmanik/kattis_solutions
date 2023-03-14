import java.util.*;

public class modulo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int k = 10;
        HashSet<Integer> tracker = new HashSet<>();
        int total = 0;
        while (k > 0) {
            int n = scanner.nextInt();
            int rem = n % 42;
            if (tracker.contains(rem)) {
                k--;
                continue;
            } else {
                total += 1;
                tracker.add(rem);
            }
            k--;
        }
        System.out.println(total);
    }
}
