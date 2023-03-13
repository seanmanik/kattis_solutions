import java.util.*;

public class testdrive {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        int diff1 = b - a;
        int diff2 = c - b;
        if (b > a && b > c) {
            System.out.println("turned");
            return;
        } else if (b < a && b < c) {
            System.out.println("turned");
            return;
        }
        if (diff1 < 0 && diff2 < 0) {
            diff1 *= -1;
            diff2 *= -1;
        }
        if (diff2 == diff1) {
            System.out.println("cruised");
        } else if (diff2 < diff1) {
            System.out.println("braked");
        } else if (diff2 > diff1) {
            System.out.println("accelerated");
        }
    }
}
