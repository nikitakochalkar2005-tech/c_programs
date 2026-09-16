
import java.util.Scanner;

class CalculatePowerOfNumber {

    /**
     * @brief this function calculate power of number
     * @param base_number : base number kitana hai
     * @param exponent_number: exponent number kitana hai
     */
    static double calculatePower(int base_number, int exponent_number) {
        return Math.pow(base_number, exponent_number);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter base number:");
        int base_number = scanner.nextInt();
        System.out.println("enter exponent number:");
        int exponent_number = scanner.nextInt();
        scanner.close();
        double result = calculatePower(base_number, exponent_number);
        System.out.println("power of a number is:" + result);
    }
}
