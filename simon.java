import java.util.*;

public class simon {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        while (n > 0) {
            String s = scanner.nextLine();
            String[] info = s.split(" ");
            if (info.length < 2) {
                System.out.println();
                n--;
                continue;
            }
            if (info[0].equals("simon")) {
                if (info[1].equals("says")) {
                    for (int i = 2; i < info.length; i++) {
                        System.out.print(info[i]);
                        if (i != info.length - 1) {
                            System.out.print(" ");
                        }
                    }
                    System.out.println();
                    n--;
                    continue;
                }
            }
            System.out.println();
            n--;
        }
    }
}
