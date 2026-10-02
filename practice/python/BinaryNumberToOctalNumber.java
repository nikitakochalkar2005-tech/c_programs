
import java.util.Scanner;

class BinaryNumberToOctalNumber {

    static int binaryNumberConvertIntoOctalNumber(int octal_Number) {
        int decimal_Number = 0;
        int weight = 1;
        int remainder;
        while (octal_Number != 0) {
            remainder = octal_Number % 10;
            decimal_Number = decimal_Number + (remainder * weight);
            weight = weight * 8;
            octal_Number = octal_Number / 10;

        }
        return decimal_Number;
    }

    public static void main(String args[]) {
        System.out.println("enter the octal number: ");
        Scanner sc = new Scanner(System.in);
        int octal_Number = sc.nextInt();
        int decimal_Number = binaryNumberConvertIntoOctalNumber(octal_Number);
        System.out.println("Octal Number: " + decimal_Number);
        sc.close();
    }

}
