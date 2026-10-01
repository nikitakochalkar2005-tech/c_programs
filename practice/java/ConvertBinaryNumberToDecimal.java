
import java.util.Scanner;

class ConvertBinaryNumberToDecimal {

    static int convertBinaryToDecimal(int binary) {
        int decimal = 0;
        int weight = 1;
        int lastDigit;
        while (binary > 0) {
            lastDigit = binary % 10;
            decimal = decimal + (lastDigit * weight);
            weight = weight * 2;
            binary = binary / 10;
        }

        return decimal;
    }

    public static void main(String[] args) {
        System.out.println("enter a binary number to convert into decimal digit:");
        Scanner scanner = new Scanner(System.in);
        int binary_digit = scanner.nextInt();
        int decimal = convertBinaryToDecimal(binary_digit);
        System.out.println("Binary: " + binary_digit + " => Decimal: " + decimal);
        scanner.close();
    

///
    }
}
