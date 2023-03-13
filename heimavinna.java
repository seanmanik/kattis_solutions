import java.util.*;

public class heimavinna {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] info = scanner.nextLine().split(";");
        int total = 0;
        for (String s : info) {
            if (s.split("-").length == 1) {
                total++;
            } else {
                String[] ids = s.split("-");
                total += (Integer.parseInt(ids[1]) - Integer.parseInt(ids[0]) + 1);
            }
        }
        System.out.println(total);

    }
}
