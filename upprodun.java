import java.util.*;

public class upprodun {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int row = scanner.nextInt();
        int n = scanner.nextInt();
        if (n % row == 0) {
            int k = n / row;
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < k; j++) {
                    System.out.print("*");
                }
                System.out.println();
            }
        } else {
            int k = n / row;
            int rem = n % row;
            for (int i = 0; i < row - rem; i++) {
                for (int j = 0; j < k; j++) {
                    System.out.print("*");
                }
                System.out.println();
            }
            for (int i = 0; i < rem; i++) {
                for (int j = 0; j < k + 1; j++) {
                    System.out.print("*");
                }
                System.out.println();
            }
        }
    }
}
