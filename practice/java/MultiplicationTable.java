import java.util.Scanner;

class MultiplicationTable {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number to print multiplication table");
        int number = sc.nextInt();
        for (int multiplication_number = 1; multiplication_number <= 10; multiplication_number++) {
            System.out.println(number + " * " + multiplication_number + " = " + (number * multiplication_number));
        }
    }
}
