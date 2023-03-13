import java.util.*;

public class scalingrecipe {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int x = scanner.nextInt();
        int y = scanner.nextInt();
        for (int i = 0 ; i < n; i++) {
            System.out.println((int) (scanner.nextInt() * y / x));
        }
    }
}
