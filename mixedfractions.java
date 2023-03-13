import java.util.*;

public class mixedfractions {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (true) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            if (a == 0 && b == 0) {
                return;
            }
            int n = a / b;
            int rem = a % b;
            System.out.println(n + " " + rem + " / " + b);
        }

    }
}
