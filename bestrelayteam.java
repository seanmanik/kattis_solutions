import java.util.*;

public class bestrelayteam {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        ArrayList<Runner> firstLeg = new ArrayList<>();
        ArrayList<Runner> subLeg = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String s = scanner.nextLine();
            String[] info = s.split(" ");
            Runner curr = new Runner(info[0], Double.parseDouble(info[1]), Double.parseDouble(info[2]));
            firstLeg.add(curr);
            subLeg.add(curr);
        }
        Collections.sort(firstLeg, new Comparator<Runner>() {
            @Override
            public int compare(Runner o1, Runner o2) {
                if (o1.firstLeg - o2.firstLeg > 0) {
                    return 1;
                } else {
                    return -1;
                }
            }
        });
        Collections.sort(subLeg, new Comparator<Runner>() {
            @Override
            public int compare(Runner o1, Runner o2) {
                if (o1.subLeg - o2.subLeg > 0) {
                    return 1;
                } else {
                    return -1;
                }
            }
        });
        //find min
        double min = 100000000;
        String mainCombi = "";
        for (int i = 0; i < 4; i++) {
            double curr = 0;
            Runner first = firstLeg.get(i);
            curr += first.firstLeg;
            String currCombi = "";
            currCombi = currCombi + first.name + "\n";
            int needed = 3;
            int counter = 0;
            while (needed > 0) {
                Runner next = subLeg.get(counter);
                if (next.equals(first)) {
                    counter++;
                } else {
                    curr += next.subLeg;
                    counter++;
                    currCombi = currCombi + next.name + "\n";
                    needed--;
                }
            }
            if (curr < min) {
                min = curr;
                mainCombi = currCombi;
            }
        }
        System.out.println(min);
        System.out.println(mainCombi);
    }
}

class Runner {
    double firstLeg;
    double subLeg;
    String name;

    public Runner(String name, double firstLeg, double subLeg) {
        this.name = name;
        this.firstLeg = firstLeg;
        this.subLeg = subLeg;
    }
}