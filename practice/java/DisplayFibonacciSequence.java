
import java.util.Scanner;

class DisplayFibonacciSequence {

    /**
     * *
     * @brief this function display the fibonacci sequence
     * @param number jis ki hame fibonacci sequence chahiye
     * @return int return Fibonacci sequence of a number
     */
    static int fibonacciSequence(int number) {
        if (number < 0) {
            return -1;
        } else if (number == 0) {
            return 0;
        } else if (number == 1) {
            return 1;
        } else {
            return fibonacciSequence(number - 1) + fibonacciSequence(number - 2);
        }

    }

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of terms for Fibonacci sequence: ");
        int number = scanner.nextInt();
        System.out.println("Fibonacci sequence:");
        for (int i = 0; i <= number; i++) {
            System.out.print(fibonacciSequence(i) + "\n ");
        }
        scanner.close();
    }
}
