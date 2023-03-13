import java.util.*;

public class gcd {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int curr = 0;
        int toDivide = 0;
        if (a > b) {
            curr = a;
            toDivide = b;
        } else {
            curr = b;
            toDivide = a;
        }
        while (true) {
            int temp = toDivide;
            toDivide = curr % toDivide;
            if (toDivide == 0) {
                System.out.println(temp);
                return;
            } else {
                curr = temp;
            }
        }
    }
}
