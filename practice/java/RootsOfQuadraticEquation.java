
import java.util.Scanner;

/**
 * @brief this program find the roots of quadratic equation
 * RootsOfQuadraticEquation
 */
class RootsOfQuadraticEquation {

    public static void main(String[] args) {
        int a;
        int b;
        int c;
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a value of a:");
        a = scanner.nextInt();
        System.out.println("enter a value of b:");
        b = scanner.nextInt();
        System.out.println("enter a value of c:");
        c = scanner.nextInt();
        scanner.close();
        int discriminant = (b * b - 4 * a * c);
        if (discriminant > 0) {
            System.out.println("two different reals roots");
        } else if (discriminant == 0) {
            System.out.println("two same real roots");

        } else if (discriminant < 0) {
            System.out.println("not real roots");
        }

    }
}
