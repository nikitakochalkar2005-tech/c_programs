
import java.util.Scanner;

/**
 * @brief This program tells which number is the largest among three numbers
 * @brief mujhe numbers user se lene hai .
 */
class LargestNumberAmongThreeNumbers {

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int first_number, second_number, third_number;
        System.out.print("enter a first number:");
        first_number = scanner.nextInt();
        System.out.print("enter a second number:");
        second_number = scanner.nextInt();
        System.out.print("enter a third number:");
        third_number = scanner.nextInt();
        if (first_number >= second_number && first_number >= second_number) {
            System.out.printf("first number %d is greater than second number %d and third number %d:", first_number, second_number, third_number);
        } else if (second_number >= first_number && second_number >= third_number) {
            System.out.printf("second number %d is greater than first number %d and third number %d:", second_number, first_number, third_number);
        } else if (third_number >= first_number && third_number >= second_number) {
            System.out.printf("third number %d greater than first number %d and second number %d:", third_number, first_number, second_number);
        }
    }
}
