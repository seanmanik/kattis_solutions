import java.util.*;

public class bard {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int e = scanner.nextInt();
        ArrayList<HashSet<Integer>> tracker = new ArrayList<>();
        for (int i = 0; i <= n; i++) {
            tracker.add(new HashSet<>());
        }
        int counter = 0;
        while (e > 0) {
            int people = scanner.nextInt();
            int[] peoples = new int[people];
            for (int i = 0; i < people; i++) {
                int curr = scanner.nextInt();
                peoples[i] = curr;
            }
            boolean hasOne = false;
            for (int i = 0; i < people; i++) {
                if (peoples[i] == 1) {
                    hasOne = true;
                }
            }
            if (hasOne) {
                counter++;
                for (int i = 0; i < people; i++) {
                    tracker.get(peoples[i]).add(counter);
                }
            } else {
                HashSet<Integer> allSongs = new HashSet<>();
                for (int i = 0; i < people; i++) {
                    int currPerson = peoples[i];
                    HashSet<Integer> currPersonSongs = tracker.get(currPerson);
                    for (int j : currPersonSongs) {
                        allSongs.add(j);
                    }
                }
                for (int i = 0; i < people; i++) {
                    int currPerson = peoples[i];
                    HashSet<Integer> copy = new HashSet<>();
                    copy.addAll(allSongs);
                    tracker.set(currPerson, copy);
                }
            }
            e--;
        }
        ArrayList<Integer> peoples = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            HashSet<Integer> thisPerson = tracker.get(i);
            boolean hasAll = true;
            for (int j = 1; j <= counter; j++) {
                if (!thisPerson.contains(j)) {
                    hasAll = false;
                    break;
                }
            }
            if (hasAll) {
                peoples.add(i);
            }
        }
        for (int i : peoples) {
            System.out.println(i);
        }
    }
}
