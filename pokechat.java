import java.util.*;

public class pokechat {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        String k = scanner.nextLine();
        for (int i = 0; i < k.length(); i += 3) {
            int id = Integer.parseInt("" + k.charAt(i) + k.charAt(i + 1) + k.charAt(i + 2));
            System.out.print(s.charAt(id - 1));
        }
    }
}
