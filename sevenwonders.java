import java.util.*;

public class sevenwonders {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] tracker = new int[3];
        String s = scanner.nextLine();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == 'T') {
                tracker[0] += 1;
            } else if (c == 'C') {
                tracker[1] += 1;
            } else if (c == 'G') {
                tracker[2] += 1;
            }
        }
        int total = 0;
        for (int i = 0; i < tracker.length; i++) {
            total += (tracker[i] * tracker[i]);
        }
        Arrays.sort(tracker);
        total += tracker[0] * 7;
        System.out.println(total);
    }
}
