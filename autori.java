import java.util.*;

public class autori {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        String[] info = s.split("-");
        for (String i : info) {
            System.out.print(i.charAt(0));
        }
    }
}
