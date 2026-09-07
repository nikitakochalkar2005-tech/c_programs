
import java.util.Scanner;

class SumOfNaturalNumbers {

    /**
     * @brief this function calculate the sum of natural numbers
     * @param number kaha se number ko
     */
    static int sumNumbers(int number, int stop_number) {
        int sum = 0;
        if (number > 0) {
            for (; number <= stop_number; number++) {
                sum = sum + number;
            }
        } else {
            System.out.println("0 is not a natural number plz enter greater than zero number:");
        }
        return sum;

    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number:");
        int number = sc.nextInt();
        System.out.println("Enter the stop number:");
        int stop_number = sc.nextInt();
        int sum = sumNumbers(number, stop_number);
        if (number > 0) {
            System.out.println("Sum of natural numbers from " + number + " to " + stop_number + " is: " + sum);
        }

    }
}
