
import java.util.Scanner;

class NumberPalindromeOrNot {

    static void numberPalindeome(int number) {
        int orignal = number;
        int digit;
        int reverse = 0;
        while (number != 0) {
            digit = number % 10;
            reverse = (reverse * 10) + digit;
            number = number / 10;
        }
        if (orignal == reverse) {
            System.out.println("number is palindarome");

        } else {
            System.out.println("number is not palindarome");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a number:");
        int number = scanner.nextInt();
        numberPalindeome(number);
    }
}
