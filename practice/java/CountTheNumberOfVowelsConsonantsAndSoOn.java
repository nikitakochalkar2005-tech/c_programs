
import static java.lang.Character.isDigit;
import static java.lang.Character.isLetter;
import static java.lang.Character.toLowerCase;

class CountTheNumberOfVowelsConsonantsAndSoOn {

    private static boolean isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    static void countVowelConsonantAndDigit(String string) {

        if (string == null || string.isEmpty()) {
            System.out.println("String is empty or null");
            return;
        }

        int digit = 0;
        int consonant = 0;
        int vowel = 0;
        for (int index = 0; index < string.length(); index++) {
            char character = string.charAt(index);
            if (isLetter(character)) {
                character = toLowerCase(character);
                if (isVowel(character)) {
                    vowel++;
                } else {
                    consonant++;
                }
            } else if (isDigit(character)) {
                digit++;
            }

        }
        System.out.println("Vowels: " + vowel);
        System.out.println("Consonants: " + consonant);
        System.out.println("Digits: " + digit);
    }
    public static void main(String[] args) {
        String string = "Hello World 123";
        countVowelConsonantAndDigit(string);
    }

}
