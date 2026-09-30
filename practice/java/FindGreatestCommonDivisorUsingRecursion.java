
import java.util.Scanner;

class FindGreatestCommonDivisorUsingRecursion {

    /**
     * @brief This method finds the greatest common divisor (GCD) of two numbers
     * using recursion.
     * @param first_number: The first number for which the GCD is to be found.
     * @param second_number: The second number for which the GCD is to be found.
     * @return The greatest common divisor of the two numbers.
     */
    static int findGreatestCommonDivisor(int first_number, int second_number) {
        if (second_number == 0) {
            return first_number;
        }
        return findGreatestCommonDivisor(second_number, first_number % second_number);
    }

    public static void main(String[] args) {
        System.out.println("enter first number");
        Scanner sc = new Scanner(System.in);
        int first_number = sc.nextInt();
        System.out.println("enter second number");
        int second_number = sc.nextInt();
        int gcd = findGreatestCommonDivisor(first_number, second_number);
        System.out.println("The greatest common divisor of " + first_number + " and " + second_number + " is: " + gcd);

    }
}
