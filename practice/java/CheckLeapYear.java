
import java.util.Scanner;

/**
 * @brief in this function check if given year is a leap year or not
 * @param year: year to be checked
 * @return: void kiyu mujhe opration perform karna hai hai result nahi dena hai
 */
class checkLeapYear {

    static void isyear(int year) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            System.out.println(" is a leap year: " + year);
        } else {
            System.out.println(" is not a leap year:" + year);
        }
    }

    public static void main(String args[]) {
        System.out.println("enter a year to check if it is a leap year or not:");
        Scanner scanner = new Scanner(System.in);
        int year = scanner.nextInt();
        isyear(year);
    }
}
