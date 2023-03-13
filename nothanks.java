import java.util.*;

public class nothanks {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        while (n > 0) {
            arr.add(scanner.nextInt());
            n--;
        }
        Collections.sort(arr);
        int total = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (i > 0) {
                if (arr.get(i) == arr.get(i - 1) + 1) {
                    continue;
                }
                total += arr.get(i);
            } else {
                total += arr.get(i);
            }
        }
        System.out.println(total);
    }
}
