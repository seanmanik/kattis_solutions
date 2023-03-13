import java.util.*;

public class pieceofcake2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        if (n - a > a) {
            a = n - a;
        }
        if (n - b > b) {
            b = n - b;
        }
        System.out.println(a * b * 4);
    }
}
