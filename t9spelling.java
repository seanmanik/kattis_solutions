import java.util.*;

public class t9spelling {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        for (int i = 1; i <= n; i++) {
            System.out.print("Case #" + i + ": ");
            process(scanner.nextLine());
            System.out.println();

        }
    }

    public static void process(String s) {
        Integer prev = null;
        for (int j = 0; j < s.length(); j++) {
            char curr = s.charAt(j);
            if (curr == 'a' || curr == 'b' || curr == 'c') {
                int repeat = curr - 'a' + 1;
                if (prev != null && prev == 2) {
                    System.out.print(" ");
                }
                for (int i = 0; i < repeat; i++) {
                    System.out.print(2);
                }
                prev = 2;
            } else if (curr == 'd' || curr == 'e' || curr == 'f') {
                int repeat = curr - 'd' + 1;
                if (prev != null && prev == 3) {
                    System.out.print(" ");
                }
                for (int i = 0; i < repeat; i++) {
                    System.out.print(3);
                }
                prev = 3;
            } else if (curr == 'g' || curr == 'h' || curr == 'i') {
                int repeat = curr - 'g' + 1;
                if (prev != null && prev == 4) {
                    System.out.print(" ");
                }
                for (int i = 0; i < repeat; i++) {
                    System.out.print(4);
                }
                prev = 4;
            } else if (curr == 'j' || curr == 'k' || curr == 'l') {
                int repeat = curr - 'j' + 1;
                if (prev != null && prev == 5) {
                    System.out.print(" ");
                }
                for (int i = 0; i < repeat; i++) {
                    System.out.print(5);
                }
                prev = 5;
            } else if (curr == 'm' || curr == 'n' || curr == 'o') {
                int repeat = curr - 'm' + 1;
                if (prev != null && prev == 6) {
                    System.out.print(" ");
                }
                for (int i = 0; i < repeat; i++) {
                    System.out.print(6);
                }
                prev = 6;
            } else if (curr == 'p' || curr == 'q' || curr == 'r' || curr == 's') {
                int repeat = curr - 'p' + 1;
                if (prev != null && prev == 7) {
                    System.out.print(" ");
                }
                for (int i = 0; i < repeat; i++) {
                    System.out.print(7);
                }
                prev = 7;
            } else if (curr == 't' || curr == 'u' || curr == 'v') {
                int repeat = curr - 't' + 1;
                if (prev != null && prev == 8) {
                    System.out.print(" ");
                }
                for (int i = 0; i < repeat; i++) {
                    System.out.print(8);
                }
                prev = 8;
            } else if (curr == 'w' || curr == 'x' || curr == 'y' || curr == 'z') {
                int repeat = curr - 'w' + 1;
                if (prev != null && prev == 9) {
                    System.out.print(" ");
                }
                for (int i = 0; i < repeat; i++) {
                    System.out.print(9);
                }
                prev = 9;
            } else if (curr == ' ') {
                if (prev != null && prev == 0) {
                    System.out.print(" ");
                }
                System.out.print(0);
                prev = 0;
            }
        }
    }
}
