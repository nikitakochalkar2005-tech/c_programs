
import java.util.Scanner;

class AccessArrayElementsUsingPointer {

    /**
     * @brief This program demonstrates how to access array elements using
     * pointers in Java.
     * @param array: The array of integers to be accessed.
     * @param arrayRowSize: The number of rows in the array.
     * @param arrayColumnSize: The number of columns in the array.
     * @return void
     */
    static void accessArrayElements(int arrayRowSize, int arrayColumnSize, int[][] array) {

        for (int arrayRowIndex = 0; arrayRowIndex < arrayRowSize; arrayRowIndex++) {
            for (int arrayColumnIndex = 0; arrayColumnIndex < arrayColumnSize; arrayColumnIndex++) {

                System.out.print(" " + array[arrayRowIndex][arrayColumnIndex]);
            }
            System.out.println(" ");
        }

    }

    public static void main(String[] args) {
        System.out.println("enter array row size");
        Scanner sc = new Scanner(System.in);
        int arrayRowSize = sc.nextInt();

        System.out.println("enter array column size");
        int arrayColumnSize = sc.nextInt();

        int[][] array = new int[arrayRowSize][arrayColumnSize];

        System.out.println("enter array elements");
        for (int rowIndex = 0; rowIndex < arrayRowSize; rowIndex++) {
            for (int columnIndex = 0; columnIndex < arrayColumnSize; columnIndex++) {
                array[rowIndex][columnIndex] = sc.nextInt();
            }
        }
        sc.close();
        System.out.println("matrix elements are");
        accessArrayElements(arrayRowSize, arrayColumnSize, array);
    }
}
