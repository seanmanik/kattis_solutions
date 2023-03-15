import java.util.*;
import java.lang.Math.*;

public class exactlyelectrical {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x1 = scanner.nextInt();
        int y1 = scanner.nextInt();
        int x2 = scanner.nextInt();
        int y2 = scanner.nextInt();
        int charge = scanner.nextInt();
        int total = Math.abs(y2 - y1) + Math.abs(x2 - x1);
        if (charge < total) {
            System.out.println("N");
        } else {
            charge -= total;
            if (charge % 2 == 0) {
                System.out.println("Y");
            } else {
                System.out.println("N");
            }
        }
    }
}
