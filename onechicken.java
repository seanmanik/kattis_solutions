import java.util.*;

public class onechicken {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int res = b - a;
        if (res >= 0) {
            if (res == 1) {
                System.out.println("Dr. Chaz will have " + res + " piece of chicken left over!");
            } else {
                System.out.println("Dr. Chaz will have " + res + " pieces of chicken left over!");
            }
        } else {
            if (res == -1) {
                System.out.println("Dr. Chaz needs " + (res * -1) + " more piece of chicken!");
            } else {
                System.out.println("Dr. Chaz needs " + (res * -1) + " more pieces of chicken!");
            }
        }
    }
}
