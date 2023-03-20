import java.util.*;

public class engineeringenglish {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        HashSet<String> tracker = new HashSet<>();
        while (scanner.hasNext()) {
            String s = scanner.nextLine();
            String[] info = s.split(" ");
            StringBuilder curr = new StringBuilder();
            for (String i : info) {
                i = i.toLowerCase();
                if (!tracker.contains(i)) {
                    tracker.add(i);
                    curr.append(i + " ");
                } else {
                    curr.append(". ");
                }
            }
            System.out.println(curr);
        }
    }
}