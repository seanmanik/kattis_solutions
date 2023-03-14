import java.util.*;

public class pascal {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        if (n == 1) {
            System.out.println(0);
            return;
        }
        if (n % 2 == 0) {
            System.out.println(n / 2);
            return;
        }
        //confirmed odd
        int curr = n / 3;
        int counter = n - curr - 2;
        if (curr % 2 == 0) {
            curr += 1;
            counter -= 1;
        }
        for (int i = curr; i >= 1; i = i - 2) {
            counter = counter + 2;
            if (n % i == 0) {
                break;
            }
        }
        System.out.println(counter);
    }
}
