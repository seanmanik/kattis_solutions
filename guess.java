import java.util.*;

public class guess {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int high = 1000;
        int low = 1;
        while (true) {
            int mid = (high + low) / 2;
            System.out.println(mid);
            String res = scanner.nextLine();
            if (res.equals("lower")) {
                high = mid - 1;
            } else if (res.equals("higher")) {
                low = mid + 1;
            } else if (res.equals("correct")) {
                return;
            }
        }
    }
}
