
import java.util.Scanner;

class SumOfTwoPrimeNumber {

    /**
     * @brief this function check number is prime or not
     * @param number: parameter isliye liya kiyu hame check karana hai number
     * prime hai ya nahi
     * @return int : prime number return karana hai
     */
    static int isPrime(int number, int second_number) {
        int prime = 1;
        int result = 0;
        if (number < 2 || second_number < 2) {
            prime = 0;
        }
        if ((number == 3 || number == 2) || (second_number == 3 || second_number == 2)) {
            prime = 1;
        }
        if ((number > 2 && number % 2 == 0) || (number > 3 && number % 3 == 0)
                || (second_number > 2 && second_number % 2 == 0) || (second_number > 3 && second_number % 3 == 0)) {
            prime = 0;
        }
        for (int i = 5; i * i <= number || i * i <= second_number; i = i + 6) {
            if ((i * i <= number && (number % i == 0 || number % (i + 2) == 0))
                    || (i * i <= second_number && (second_number % i == 0 || second_number % (i + 2) == 0))) {
                prime = 0;
            }
        }
        if (prime == 1) {
            result = number + second_number;
        } else {
            System.out.println("the given numbers not exit prime sum:");
        }
        return result;
    }

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a first number to find a prime sum:");
        int first_number = scanner.nextInt();
        System.out.println("enter a second number to find a prime sum");
        int second_number = scanner.nextInt();
        int sum = first_number + second_number;
        int result = isPrime(first_number, second_number);
        if (result == 0) {
            return;
        } else {
            System.out.println("sum of the prime numbers is:" + result);
        }

    }
}
