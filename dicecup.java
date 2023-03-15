import java.util.*;

public class dicecup {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int[] scores = new int[a + b + 1];
        int max = 0;
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= b; j++) {
                int curr = i + j;
                scores[curr]++;
                if (scores[curr] > max) {
                    max = scores[curr];
                }
            }
        }
        for (int i = 0; i < scores.length; i++) {
            if (scores[i] == max) {
                System.out.println(i);
            }
        }

    }
}
