
import java.util.Scanner;

/**
 * @brief this function check whether character is alphabet or not
 * @param character parameter ye char alphabet hai ki nahi ye check karana hai
 * @return int return type hai agar character alphabet hai to 0 return karega
 * aur agar nahi hai to -1 return karega
 */
class checkAlphabet {

    static int alphabet(char character) {

        if (Character.isLetter(character)) { // Capital 'C' aur bracket me variable
            System.out.println("character is a alphabet:");
            return 0;
        } else {
            System.out.println("character is not a alphabet:");
        }
        return -1;
    }

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a character");
        char character = scanner.next().charAt(0);
        alphabet(character);

    }
}
