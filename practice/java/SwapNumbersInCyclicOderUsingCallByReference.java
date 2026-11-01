
import java.util.Scanner;

class SwapNumberInCyclicOderUsingCallByReference {

    /**
     * @brief this method is used to swap the numbers in cyclic order using call
     * by reference.
     * @param firstNumber: first number to be swapped
     * @param secondNumber: second number to be swapped
     * @param thirdNumber: third number to be swapped
     * @return void
     */
    static void swapNumbersInCyclicOrder(int firstNumber, int secondNumber, int thirdNumber) {
        firstNumber = firstNumber + secondNumber + thirdNumber;
        secondNumber = firstNumber - (secondNumber + thirdNumber);
        thirdNumber = firstNumber - (secondNumber + thirdNumber);
        firstNumber = firstNumber - (secondNumber + thirdNumber);
        System.out.println("After swapping in cyclic order: ");
        System.out.println("First Number: " + firstNumber);
        System.out.println("Second Number: " + secondNumber);
        System.out.println("Third Number: " + thirdNumber);
    }

    public static void main(String[] args) {
        System.out.println("enter a first number: ");
        Scanner sc = new Scanner(System.in);
        int firstNumber = sc.nextInt();
        System.out.println("enter a second number: ");
        int secondNumber = sc.nextInt();
        System.out.println("enter a third number: ");
        int thirdNumber = sc.nextInt();
        System.out.println("Before swapping: ");
        System.out.println("First Number: " + firstNumber);
        System.out.println("Second Number: " + secondNumber);
        System.out.println("Third Number: " + thirdNumber);
        swapNumbersInCyclicOrder(firstNumber, secondNumber, thirdNumber);
        sc.close();

    }
}
