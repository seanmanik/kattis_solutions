import java.util.*;

public class zoo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int counter = 1;
        while(true) {
            int n = scanner.nextInt();
            if (n == 0) {
                return;
            }
            HashMap<String, Integer> hm = new HashMap<>();
            scanner.nextLine();
            while (n > 0) {
                String[] info = scanner.nextLine().split(" ");
                String type = info[info.length -1].toLowerCase();
                hm.put(type, hm.getOrDefault(type, 0) + 1);
                n--;
            }
            ArrayList<String> arr = new ArrayList<>();
            for (String s : hm.keySet()) {
                arr.add(s);
            }
            Collections.sort(arr);
            System.out.println("List " + counter + ":");
            for (String s : arr) {
                System.out.println(s + " | " + hm.get(s));
            }
            counter++;
        }
    }
}
