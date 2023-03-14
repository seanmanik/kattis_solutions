import java.util.*;

public class speeding {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int max = 0;
        int prevT = 0;
        int prevD = 0;
        while (n > 0) {
            int currT = scanner.nextInt();
            int currD = scanner.nextInt();
            if (currT == 0) {
                n--;
                continue;
            }
            int diffT = currT - prevT;
            int diffD = currD - prevD;
            int speed = diffD / diffT;
            if (speed > max) {
                max = speed;
            }
            prevD = currD;
            prevT = currT;
            n--;
        }
        System.out.println(max);
    }
}
