import java.util.*;

public class blueberrywaffle {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        double res = (double) b / (double) a;
        int rounded = 0;
        if (res % 1 == 0) {
            rounded = (int) res;
        } else {
            if (res % 1 >= 0.5) {
                rounded = (int) res + 1;
            } else {
                rounded = (int) res;
            }
        }
        if (rounded % 2 == 0) {
            System.out.println("up");
        } else {
            System.out.println("down");
        }
    }
}
