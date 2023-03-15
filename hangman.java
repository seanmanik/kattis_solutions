import java.util.*;

public class hangman {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String word = scanner.nextLine();
        HashSet<Character> letters = new HashSet<>();
        for (int i = 0; i < word.length(); i++) {
            letters.add(word.charAt(i));
        }
        String attempts = scanner.nextLine();
        int lives = 10;
        int counter = 0;
        while (lives > 0) {
            if (letters.size() == 0) {
                break;
            }
            char curr = attempts.charAt(counter);
            if (letters.contains(curr)) {
                letters.remove(curr);
            } else {
                lives--;
            }
            counter++;
        }
        if (lives == 0) {
            System.out.println("LOSE");
        } else {
            System.out.println("WIN");
        }
    }
}
