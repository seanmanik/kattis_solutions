import java.util.*;

public class zyxab {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int k = scanner.nextInt();
        scanner.nextLine();
        ArrayList<String> arr = new ArrayList<>();
        for (int i = 0; i < k; i++) {
            String s = scanner.nextLine();
            if (s.length() >= 5 && notRepeated(s)) {
                arr.add(s);
            }
        }
        if (arr.size() == 0) {
            System.out.println("neibb!");
            return;
        }
        Collections.sort(arr, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                if (o1.length() < o2.length()) {
                    return -1;
                } else if (o1.length() > o2.length()) {
                    return 1;
                } else {
                    return -1 * o1.compareTo(o2);
                }
            }
        });
        System.out.println(arr.get(0));
    }

    public static boolean notRepeated(String s) {
        HashSet<Character> hs = new HashSet<>();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (!hs.contains(c)) {
                hs.add(c);
            } else {
                return false;
            }
        }
        return true;
    }
}
