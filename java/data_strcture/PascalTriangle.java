
import java.util.Scanner;

class PascalTriangle {

    /**
     * *
     * @brief this function display a pascal triangle
     */
    static void triangle(int row_size, int column_size, int[][] array) {
        int sum = 0;
        for (int row_index = 0; row_index < row_size; row_index++) {
            for (int column_index = 0; column_index <= row_index; column_index++) {
                int result = array[row_index][column_index];
                System.out.print(" " + result);
                sum = sum + result;
            }
            System.out.println();
        }
        System.out.println("Total Sum = " + sum);
    }

    public static void main(String args[]) {
        System.out.println("Enter the number of rows for pascal triangle");
        Scanner scanner = new Scanner(System.in);
        int row_size = scanner.nextInt();
        System.out.println("Enter the number of columns for pascal triangle");
        int column_size = scanner.nextInt();
        int[][] array = new int[row_size][column_size];
        System.out.println("Enter the elements of pascal triangle");
        for (int row_index = 0; row_index < row_size; row_index++) {
            for (int column_index = 0; column_index < column_size; column_index++) {
                array[row_index][column_index] = scanner.nextInt();
            }
        }
        triangle(row_size, column_size, array);
    }

}
