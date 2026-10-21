
import java.util.Scanner;

class AddTwoMatricesUsingMultidimensionalArray {

    /**
     * This method adds two matrices.
     *
     * @param firstArray The first matrix.
     * @param secondArray The second matrix.
     */
    static void addTwoMatrices(int columnSize, int rowSize,
            int[][] firstArray, int[][] secondArray) {
        int sum;
        for (int indexRow = 0; indexRow < rowSize; indexRow++) {
            for (int indexColumn = 0; indexColumn < columnSize; indexColumn++) {
                sum = firstArray[indexRow][indexColumn] + secondArray[indexRow][indexColumn];
                System.out.print(sum + "\t");
            }
            System.out.println("");
        }
    }

    public static void main(String args[]) {
        System.out.println("enter a row size:");
        Scanner scanner = new Scanner(System.in);
        int rowSize = scanner.nextInt();
        System.out.println("enter a column size:");
        int columnSize = scanner.nextInt();
        int[][] firstArray = new int[rowSize][columnSize];
        int[][] secondArray = new int[rowSize][columnSize];
        for (int indexRow = 0; indexRow < rowSize; indexRow++) {
            for (int indexColumn = 0; indexColumn < columnSize; indexColumn++) {
                System.out.println("enter array element" + "firstArray[" + indexRow + "][" + indexColumn + "]");
                firstArray[indexRow][indexColumn] = scanner.nextInt();
            }
        }
        for (int indexRow = 0; indexRow < rowSize; indexRow++) {
            for (int indexColumn = 0; indexColumn < columnSize; indexColumn++) {
                System.out.println("enter array element" + "secondArray[" + indexRow + "][" + indexColumn + "]");
                secondArray[indexRow][indexColumn] = scanner.nextInt();
            }
        }
        scanner.close();
        addTwoMatrices(columnSize, rowSize, firstArray, secondArray);
    }
}
