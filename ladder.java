import java.util.*;
import java.lang.Math.*;

public class ladder {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int h = scanner.nextInt();
        int deg = scanner.nextInt();
        double rad = Math.toRadians(deg);
        double sindeg = Math.sin(rad);
        double height = h / sindeg;
        if (height % 1 == 0) {
            System.out.println(height);
        } else {
            int newH = (int) height;
            System.out.println(newH + 1);
        }
    }
}
