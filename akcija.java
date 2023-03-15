import java.util.*;

public class akcija {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        Arrays.sort(arr);
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += arr[i];
        }
        for (int i = n - 1; i >= 0; i = i - 3) {
            if (i - 2 >= 0) {
                total -= arr[i - 2];
            }
        }
        System.out.println(total);
    }
}
