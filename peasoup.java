import java.util.*;

public class peasoup {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int restaurants = scanner.nextInt();
        boolean found = false;
        while (restaurants > 0) {
            int k = scanner.nextInt();
            scanner.nextLine();
            String name = scanner.nextLine();
            boolean peasoup = false;
            boolean pancakes = false;
            while(k > 0) {
                String s = scanner.nextLine();
                if (s.equals("pea soup")) {
                    peasoup = true;
                } else if (s.equals("pancakes")) {
                    pancakes = true;
                }
                k--;
            }
            if (peasoup && pancakes) {
                found = true;
                System.out.println(name);
                return;
            }
            restaurants--;
        }
        if (!found) {
            System.out.println("Anywhere is fine I guess");
        }
    }
}
