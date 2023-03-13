import java.util.*;

public class basketballoneonone {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        int a = 0;
        int b = 0;
        int counter = 0;
        boolean special = false;
        while (true) {
            if (special)  {
                if (a - b >= 2) {
                    System.out.println("A");
                    return;
                }
                if (b - a >= 2) {
                    System.out.println("B");
                    return;
                }
            } else {
                if (a >= 11) {
                    System.out.println("A");
                    return;
                }
                if (b >= 11) {
                    System.out.println("B");
                    return;
                }
            }

            //both > 1
            char player = s.charAt(counter);
            char score = s.charAt(counter + 1);
            if (player == 'A') {
                if (score == '1') {
                    a += 1;
                } else {
                    a += 2;
                }
            } else if (player == 'B') {
                if (score == '1') {
                    b += 1;
                } else {
                    b += 2;
                }
            }
            if (a == 10 && b == 10) {
                special = true;
            }
            counter += 2;
        }
    }
}
