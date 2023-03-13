import java.util.*;

public class soylent {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        while (n > 0) {
            int cal = scanner.nextInt();
            if (cal % 400 == 0) {
                System.out.println(cal / 400);
            } else {
                System.out.println(cal / 400 + 1);
            }
            n--;
        }
    }
}
