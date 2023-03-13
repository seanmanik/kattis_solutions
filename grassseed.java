import java.util.*;

public class grassseed {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double c = scanner.nextDouble();
        int l = scanner.nextInt();
        double totalArea = 0;
        while (l > 0) {
            double w = scanner.nextDouble();
            double lr = scanner.nextDouble();
            totalArea += (w * lr);
            l--;
        }
        System.out.println(c * totalArea);
    }
}
