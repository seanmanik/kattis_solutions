import java.util.*;

public class bracketmatching {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        if (n % 2 == 1) {
            System.out.println("Invalid");
            return;
        }
        if (n == 0) {
            System.out.println("Valid");
            return;
        }
        scanner.nextLine();
        String s = scanner.nextLine();
        Stack<Character> brackets = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '(' || c == '[' || c == '{') {
                brackets.add(c);
            } else if (c == '}') {
                if (brackets.size() == 0) {
                    System.out.println("Invalid");
                    return;
                }
                char x = brackets.pop();
                if (x == '{') {
                    continue;
                } else {
                    System.out.println("Invalid");
                    return;
                }
            } else if (c == ']') {
                if (brackets.size() == 0) {
                    System.out.println("Invalid");
                    return;
                }
                char x = brackets.pop();
                if (x == '[') {
                    continue;
                } else {
                    System.out.println("Invalid");
                    return;
                }
            } else if (c == ')') {
                if (brackets.size() == 0) {
                    System.out.println("Invalid");
                    return;
                }
                char x = brackets.pop();
                if (x == '(') {
                    continue;
                } else {
                    System.out.println("Invalid");
                    return;
                }
            }
        }
        if (brackets.size() == 0) {
            System.out.println("Valid");
        } else {
            System.out.println("Invalid");
        }
    }
}
