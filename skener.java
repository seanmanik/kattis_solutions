import java.util.*;

public class skener {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int r = scanner.nextInt();
        int c = scanner.nextInt();
        int zr = scanner.nextInt();
        int zc = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < r; i++) {
            String toPrint = "";
            String s = scanner.nextLine();
            for (int j = 0; j < c; j++) {
                for (int k = 0; k < zc; k++) {
                    toPrint += s.charAt(j);
                }
            }
            for (int k = 0; k < zr; k++) {
                System.out.println(toPrint);
            }
        }
    }
}
