
import java.util.Scanner;
import jdk.dynalink.Operation;

class MakeSimpleCalculatorUsingSwitchCase {

    /**
     * @brief this function display a addition of two numbers
     * @param first_number: parameter for first number to addition
     * @param second_number: parameter for second number to addition
     * @return double: return addition of two numbers
     */
    static double addition(double first_number, double second_number) {

        return first_number + second_number;
    }

    /**
     * @brief this function display subtraction between two numbers
     * @param first_number: parameter for first number to subtract
     * @param second_number: parameter for second number to subtract
     * @return double : return subtraction value
     */
    static double subtraction(double first_number, double second_number) {

        return first_number - second_number;
    }

    /**
     * @brief this function multiply two numbers
     * @param first_number: parameter for first number to multiply
     * @param second_number: parameter for second number to multiply
     * @return double : return multiply value
     */
    static double multiplication(double first_number, double second_number) {

        return first_number * second_number;
    }

    /**
     * @brief this function divide two numbers
     * @param first_number: parameter for first number to divide
     * @param second_number: parameter for second number to divide
     * @return double : return divide value
     */
    static double division(double first_number, double second_number) {

        return first_number / second_number;
    }

    /**
     * @brief this function give a remainder of two division numbers
     * @param first_number: parameter for first number modules
     * @param second_number: parameter for second number modules
     * @return double : return remainder value
     */
    static double remainder(double first_number, double second_number) {
        return first_number % second_number;
    }

    public static void main(String args[]) {
        System.out.println("enter a first number:");
        Scanner scanner = new Scanner(System.in);
        double first_number = scanner.nextDouble();
        System.out.println("enter a second number:");
        double second_number = scanner.nextDouble();
        System.out.println("enter operation: +, -, *, /, %");
        String operation = scanner.next();
        switch (operation) {
            case "+":
                double result = addition(first_number, second_number);
                System.out.println("result:" + result);
                break;
            case "-":
                result = subtraction(first_number, second_number);
                System.out.println("result:" + result);
                break;
            case "*":
                result = multiplication(first_number, second_number);
                System.out.println("result:" + result);
                break;
            case "/":
                if (second_number == 0) {
                    System.out.println("division by zero is not allowed");
                    break;
                }
                result = division(first_number, second_number);
                System.out.println("result:" + result);
                break;
            case "%":
                if (second_number == 0) {
                    System.out.println("division by zero is not allowed");
                    break;
                }
                result = remainder(first_number, second_number);
                System.out.println("result:" + result);
                break;

            default:
                System.out.println("invalid operation");
                break;
        }
        scanner.close();

    }
}
