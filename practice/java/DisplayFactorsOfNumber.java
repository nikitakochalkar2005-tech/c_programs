
import java.util.Scanner;

/**
 *
 * @brief this function display factors of a number
 * @param number: parameter number isliye liya ki number ka hamai factors find
 * karana hai
 * @return void: the function returns 1 if successful, 0 if an error occurs
 *
 *
 */
class DisplayFactorsOfNumber {

    static void factorsOfNumber(int number) {

        for (int divisor = 1; divisor <= number; divisor++) {
            if (number % divisor == 0) {
                System.out.println("fa ctors of a number is:" + divisor);
            }
        }

    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        scanner.close();
        factorsOfNumber(number);
    }
}
