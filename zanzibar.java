import java.util.*;

public class zanzibar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int tc = scanner.nextInt();
        while (tc > 0) {
            int prev = 0;
            int total = 0;
            while (true) {
               int curr = scanner.nextInt();
               if (curr == 0) {
                   break;
               } else if (curr == 1) {
                   prev = curr;
               } else {
                   int toCompare = prev * 2;
                   if (curr > toCompare) {
                       total += (curr - toCompare);
                   }
                   prev = curr;
               }
            }
            System.out.println(total);
            tc--;
        }
    }
}
