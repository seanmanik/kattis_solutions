import java.util.*;

public class classfieldtrip {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String a = scanner.nextLine();
        String b = scanner.nextLine();
        char[] arr = new char[a.length() + b.length()];
        for (int i = 0; i < a.length(); i++) {
            arr[i] = a.charAt(i);
        }
        for (int i = 0; i < b.length(); i++) {
            arr[a.length() + i] = b.charAt(i);
        }
        Arrays.sort(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
        }
    }
}
