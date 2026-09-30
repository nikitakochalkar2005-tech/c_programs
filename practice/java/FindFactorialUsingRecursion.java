
import java.util.Scanner;

class FindFactorialUsingRecursion {

    /**
     * @brief this function display a factorial of a number
     * @param number: kis number ka factorial nikalana hai isliye number
     * parameter liya
     * @return int: return factorial
     */
    static int factorialOfNumber(int number) {

        if (number == 1) {
            return 1;
        }
        number = number * factorialOfNumber(number - 1);
        return number;

    }

    public static void main(String args[]) {
        System.out.println("Enter a number to find factorial:");
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();
        int result = factorialOfNumber(number);
        scanner.close();
        System.out.println("factorial of a number is:" + result);
    }

}
