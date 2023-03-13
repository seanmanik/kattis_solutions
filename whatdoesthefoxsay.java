import java.util.*;

public class whatdoesthefoxsay {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        while (n > 0) {
            String s = scanner.nextLine();
            HashSet<String> calls = new HashSet<>();
            while (true) {
                String curr = scanner.nextLine();
                if (curr.equals("what does the fox say?")) {
                    break;
                }
                String[] info = curr.split(" ");
                calls.add(info[info.length - 1]);
            }
            String[] words = s.split(" ");
            for (String w : words) {
                if (!calls.contains(w)) {
                    System.out.print(w + " ");
                }
            }
            n--;
        }
    }
}
