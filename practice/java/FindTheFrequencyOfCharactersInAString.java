
import java.util.Scanner;

class FindTheFrequencyOfCharactersInAString {

    /**
     * @brief this function find the frequency of a character in a string
     * @param string: string isliye liya kiyu mujhe iski frequency nikalani hai
     * @return void kuch return nahi kara na hai
     */
    static void frequencyOfString(String string) {
        int[] frequency = new int[256];
        for (int index = 0; index < string.length(); index++) {
            char character = string.charAt(index);
            frequency[character]++;
        }
        for (int ascii_value = 0; ascii_value < 256; ascii_value++) {
            char character = (char) ascii_value;
            if (frequency[ascii_value] > 0 && ascii_value != '\n') {
                System.out.println("character " + character + "  time   " + frequency[ascii_value]);
            }
        }

    }

    public static void main(String args[]) {
        System.out.println("enter a string to find frequency");
        Scanner scanner = new Scanner(System.in);
        String string = scanner.nextLine();
        frequencyOfString(string);

    }

}
