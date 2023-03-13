import java.util.*;

public class licensetolaunch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int lowest = Integer.MAX_VALUE;
        int counter = 0;
        for (int i = 0; i < n; i++) {
            int curr = scanner.nextInt();
            if (curr < lowest) {
                lowest = curr;
                counter = i;
            }
        }
        System.out.println(counter);
    }
}
