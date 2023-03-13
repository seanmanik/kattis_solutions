import java.util.*;

public class baconeggsandspam {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (true) {
            int n = scanner.nextInt();
            if (n == 0) {
                return;
            }
            scanner.nextLine();
            HashMap<String, ArrayList<String>> hm = new HashMap<>();
            while (n > 0) {
                String s = scanner.nextLine();
                String[] info = s.split(" ");
                String name = info[0];
                for (int i = 1; i < info.length; i++) {
                    String food = info[i];
                    if (!hm.containsKey(food)) {
                        ArrayList<String> arr = new ArrayList<>();
                        arr.add(name);
                        hm.put(food, arr);
                    } else {
                        ArrayList<String> arr = hm.get(food);
                        arr.add(name);
                    }
                }
                n--;
            }
            ArrayList<String> foods = new ArrayList<>();
            for (String s : hm.keySet()) {
                foods.add(s);
            }
            Collections.sort(foods);
            for (String s : foods) {
                ArrayList<String> names = hm.get(s);
                Collections.sort(names);
                System.out.print(s);
                for (String k : names) {
                    System.out.print(" " + k);
                }
                System.out.println();
            }
            System.out.println();
        }
    }
}
