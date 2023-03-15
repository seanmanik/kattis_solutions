import java.util.*;

public class numberfun {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        while (n > 0) {
            int[] arr = new int[3];
            arr[0] = scanner.nextInt();
            arr[1] = scanner.nextInt();
            arr[2] = scanner.nextInt();
            Arrays.sort(arr);
            if (arr[0] + arr[1] == arr[2]) {
                System.out.println("Possible");
            } else if (arr[0] * arr[1] == arr[2]) {
                System.out.println("Possible");
            } else {
                System.out.println("Impossible");
            }
            n--;
        }
    }
}
