
import java.util.Scanner;

class LeastCommonMultiple {

    /**
     * @brief this function display greatest common divisor
     * @param first_number kiyu use kiya hamai dono numbers chaihiye greatest
     * common divisor ke liye us mai se ye first number hai
     * @param first_number kiyu use kiya hamai dono numbers chaihiye greatest
     * common divisor ke liye us mai se ye first number hai
     * @return mujhe gcd return karana hai gcd ka meaning greatest common
     * divisor hota hai
     * @var gcd meaning greatest common divisor hota hai
     */
    static int greatestCommonDivisor(int first_number, int second_number) {
        int gcd = 1;
        for (int divisor = 1; divisor <= first_number && divisor <= second_number; divisor++) {
            if (first_number % divisor == 0 && second_number % divisor == 0) {
                System.out.println("common divisor is:" + divisor);
                gcd = divisor;
            }

        }
        return gcd;
    }

    /**
     * @brief this function display a lcm
     */
    static int leastCommonMultiple(int first_number, int second_number) {
        int gcd = greatestCommonDivisor(first_number, second_number);
        int lcm = (first_number * second_number) / gcd;
        return lcm;
    }

    public static void main(String args[]) {
        System.out.println("enter a first to find LCM:");
        Scanner sc = new Scanner(System.in);
        int first_number = sc.nextInt();
        System.out.println("enter a second to find LCM:");
        int second_number = sc.nextInt();
        int lcm = leastCommonMultiple(first_number, second_number);
        System.out.println("least common multiple is:" + lcm);

    }
}
