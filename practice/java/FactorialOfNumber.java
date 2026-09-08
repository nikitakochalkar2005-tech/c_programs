
import java.math.BigInteger;
import java.util.Scanner;

class FactorialOfNumber {

    /**
     * @brief this function calculates the factorial of a number
     * @param number kis number ka factorial chahiye
     * @return BigInteger return
     */
    static BigInteger factorial(BigInteger number) {
        if (number.compareTo(BigInteger.ZERO) < 0) {
            return BigInteger.valueOf(-1);
        } else if (number.equals(BigInteger.ZERO) || number.equals(BigInteger.ONE)) {
            return BigInteger.ONE;
        } else {
            return number.multiply(factorial(number.subtract(BigInteger.ONE)));
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number to find factorial");
        BigInteger number = sc.nextBigInteger();
        BigInteger returnFactorial = factorial(number);
        System.out.println(returnFactorial);
    }
}
