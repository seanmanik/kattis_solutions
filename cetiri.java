import java.util.*;

public class cetiri {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] arr = new int[3];
        arr[0] = scanner.nextInt();
        arr[1] = scanner.nextInt();
        arr[2] = scanner.nextInt();
        Arrays.sort(arr);
        int diff1 = arr[1] - arr[0];
        int diff2 = arr[2] - arr[1];
        if (diff1 == diff2) {
            System.out.println(arr[2] + diff1);
        } else if (diff1 == 2 * diff2) {
            System.out.println(arr[0] + diff2);
        } else {
            System.out.println(arr[1] + diff1);
        }
    }
}
