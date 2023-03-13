import java.util.*;

public class judgingmoose {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int left = scanner.nextInt();
        int right = scanner.nextInt();
        if (left == 0 && right == 0) {
            System.out.println("Not a moose");
        } else if (left == right) {
            System.out.println("Even " + left * 2);
        } else {
            if (left > right) {
                System.out.println("Odd " + left * 2);
            } else {
                System.out.println("Odd " + right * 2);
            }
        }
    }
}
