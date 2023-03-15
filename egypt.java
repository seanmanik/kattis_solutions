import java.util.*;

public class egypt {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (true) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            if (a == 0 && b == 0 && c == 0) {
                return;
            } else {
                int[] arr = new int[3];
                arr[0] = a;
                arr[1] = b;
                arr[2] = c;
                Arrays.sort(arr);
                if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) {
                    System.out.println("right");
                } else {
                    System.out.println("wrong");
                }
            }
        }
    }
}
