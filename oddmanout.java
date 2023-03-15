import java.util.*;

public class oddmanout {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int tc = scanner.nextInt();
        for (int i = 0; i < tc; i++) {
            int n = scanner.nextInt();
            HashSet<Integer> hs = new HashSet<>();
            while (n > 0) {
                int curr = scanner.nextInt();
                if (hs.contains(curr)) {
                    hs.remove(curr);
                } else {
                    hs.add(curr);
                }
                n--;
            }
            for (Integer k : hs) {
                System.out.println("Case #" + (i + 1) + ": " + k);
            }

        }
    }
}
