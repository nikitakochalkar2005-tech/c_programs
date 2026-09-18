
import java.util.Scanner;

class DisplayprimeNumbersBetweenTwoIntervals {

    /**
     * @brief this function display prime numbers between two intervals
     * @param start_number: the starting number of the interval
     * @param end_number: the ending number of the interval
     * @return void: the function returns 1 if successful, 0 if an error occurs
     */
    static void prime_number_between_two_intervals(int start_number, int end_number) {
        for (int number = start_number; number <= end_number; number++) {
            int isprime = 1;
            if (number < 2) {
                isprime = 0;
            } else if (number != 2 && number != 3 && (number % 2 == 0 || number % 3 == 0)) {
                isprime = 0;
            }
            for (int i = 5; i * i < number; i += 2) {
                if (number % i == 0 || number % (i + 2) == 0) {
                    isprime = 0;
                }

                if (isprime == 1) {
                    System.out.printf("it a prime number:%d\n", number);
                }
            }
        }

    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the starting number: ");
        int start_number = scanner.nextInt();
        System.out.print("Enter the ending number: ");
        int end_number = scanner.nextInt();
        scanner.close();
        prime_number_between_two_intervals(start_number, end_number);
    }

}
