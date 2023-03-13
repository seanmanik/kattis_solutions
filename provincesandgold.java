import java.util.*;

public class provincesandgold {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int g = scanner.nextInt();
        int s = scanner.nextInt();
        int c = scanner.nextInt();
        int total =  g * 3 + s * 2 + c * 1;
        if (total >= 8) {
            System.out.print("Province or ");
        } else if (total >= 5) {
            System.out.print("Duchy or ");
        } else if (total >= 2) {
            System.out.print("Estate or ");
        }
        if (total >= 6) {
            System.out.print("Gold");
        } else if (total >= 3) {
            System.out.print("Silver");
        } else {
            System.out.println("Copper");
        }
    }
}
