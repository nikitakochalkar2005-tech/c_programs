
import java.util.Scanner;

/**
 * @berif this function check number is positive or negative
 * @param number parameter isliye likha ki hame dekhana hai number negative hai
 * ya positive
 */
class numberPositiveNegative {

    static int positiveNegative(double number) {

        if (number < 0) {
            System.out.println("number is negative");
        } else if (number == 0) {
            System.out.println("number is zero");
        } else {
            System.out.println("number is positive");
        }
        return 0;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        double number = sc.nextDouble();
        sc.close();
        positiveNegative(number);

    }

}
