
import java.util.Scanner;


class WetherNumberPrimeOrNot {

    /**
     * @brief this function check wether number is prime or not
     * @param number: number parameter isliye liya kiyu ki check karana hai
     * given number prime hai ya nahi
     * @return void: mujhe kuch return nahi karana hai 
     */
    static void isPrime(int number) {
        if (number <= 1) {
            System.out.println("invalid");
            return;
        }
        if (number == 2 || number == 3) {
            System.out.println("given number is a prime number:" + number);
            return;
        }
        if (number % 2 == 0 || number % 3 == 0) {
            System.out.println(" given number is a not prime number:" + number);
            return;
        }
        for (int i = 5; i * i <= number; i += 2) {
            if (number % i == 0 || number % (i + 2) == 0) {
                System.out.println("given number is not a prime number:" + number);
                return;
            }
        }
         System.out.println("given number is a prime number:" + number);

    }
public static void main(String[] args) {
     Scanner scanner = new Scanner(System.in);
     System.out.println("enter a number to find it a prime  or not:");
     int number = scanner.nextInt();
    scanner.close();
    isPrime(number);

}
}
