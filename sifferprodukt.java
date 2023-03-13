import java.util.*;

public class sifferprodukt {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        while(true) {
            if (s.length() == 1) {
                System.out.println(s);
                return;
            }
            s = process(s);
        }
    }

    public static String process(String s) {
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c != '0') {
                arr.add(Integer.parseInt("" + c));
            }
        }
        int res = 1;
        if (arr.size() == 0) {
            return "0";
        }
        for (int i : arr) {
            res *= i;
        }
        return "" + res;
    }
}
