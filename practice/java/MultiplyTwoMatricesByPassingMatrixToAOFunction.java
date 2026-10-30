
import java.util.*;

class MultiplyTwoMatricesByPassingMatrixToAFunction {

    /**
     * @brief this function display the matrix elements
     * @param matrix: kis matrix ke elements print karana hai
     * @param matrixRowSize: matrix ki row size kitani hogi
     * @param matrixColumnSize: matrix ki column size kitani hogi
     * @return void: kuch return nahi karana hai
     */
    static void displayFirstMatrix(int matrixRowSize, int matrixColumnSize, int[][] matrix) {

        for (int rowIndex = 0; rowIndex < matrixRowSize; rowIndex++) {
            for (int columnIndex = 0; columnIndex < matrixColumnSize; columnIndex++) {

                System.out.print(matrix[rowIndex][columnIndex] + "\t");
            }
            System.out.print("\n");
        }
    }

    /**
     * @brief this function display the matrix element
     * @param matrix: jis matrix ko display karana hai
     * @param matrixRowSize: matrix ki row ki size kya hogi hogi isliye ye
     * parameter liya hai
     * @param matrixColumnSize: matrix ki column ki size kya hogi isliye ye
     * parameter liya hai
     * @return void: kuch return nahi karana hai
     */
    static void displaySecondMatrix(int matrixRowSize, int matrixColumnSize, int[][] matrix) {
        for (int rowIndex = 0; rowIndex < matrixRowSize; rowIndex++) {
            for (int columnIndex = 0; columnIndex < matrixColumnSize; columnIndex++) {
                System.out.print(matrix[rowIndex][columnIndex] + "\t");
            }
            System.out.print("\n");
        }

    }

    /**
     * @brief this function multiply two matrix
     * @param firstMatrix: first matrix jiske sath multiply karana ho
     * @param secondMatrix: second matrix jiske sath multiply karana ho
     * @param firstMatrixRowSize: first matrix row size
     * @param firstMatrixColumnSize: first matrix column size
     * @param secondMatrixRowSize: second matrix column size
     * @param secondMatrixColumnSize: second matrix column size
     */
    static void multiplyTwoMatrix(int firstMatrixRowSize, int firstMatrixColumnSize, int secondMatrixRowSize, int secondMatrixColumnSize, int[][] firstMatrix, int[][] secondMatrix, int[][] result) {

        for (int rowIndex = 0; rowIndex < firstMatrixRowSize; rowIndex++) {
            for (int columnIndex = 0; columnIndex < secondMatrixColumnSize; columnIndex++) {
                for (int counter = 0; counter < firstMatrixColumnSize; counter++) {
                    result[rowIndex][columnIndex] += firstMatrix[rowIndex][counter] * secondMatrix[counter][columnIndex];
                }
                System.out.print(result[rowIndex][columnIndex] + "\t");
            }
            System.out.print("\n");
        }
    }

    public static void main(String args[]) {
        System.out.println("enter a first matrix row size:");
        Scanner scanner = new Scanner(System.in);
        int firstMatrixRowSize = scanner.nextInt();
        System.out.println("enter a first matrix column size:");
        int firstMatrixColumnSize = scanner.nextInt();
        System.out.println("enter a second matrix row size:");
        int secondMatrixRowSize = scanner.nextInt();
        System.out.println("enter a second matrix column size:");
        int secondMatrixColumnSize = scanner.nextInt();
        int[][] firstMatrix = new int[firstMatrixRowSize][firstMatrixColumnSize];
        int[][] secondMatrix = new int[secondMatrixRowSize][secondMatrixColumnSize];
        for (int rowIndex = 0; rowIndex < firstMatrixRowSize; rowIndex++) {
            {
                for (int columnIndex = 0; columnIndex < firstMatrixColumnSize; columnIndex++) {
                    firstMatrix[rowIndex][columnIndex] = scanner.nextInt();

                }
            }
        }
        for (int rowIndex = 0; rowIndex < secondMatrixRowSize; rowIndex++) {
            {
                for (int columnIndex = 0; columnIndex < secondMatrixColumnSize; columnIndex++) {
                    secondMatrix[rowIndex][columnIndex] = scanner.nextInt();

                }
            }
        }

        
        int[][] result = new int[firstMatrixRowSize][secondMatrixColumnSize];
        displayFirstMatrix(firstMatrixRowSize, firstMatrixColumnSize, firstMatrix);
        System.out.println("second matrix printing");
        displaySecondMatrix(secondMatrixRowSize, secondMatrixColumnSize, secondMatrix);
        System.out.println("multiply matrix");
        multiplyTwoMatrix(firstMatrixRowSize, firstMatrixColumnSize, secondMatrixRowSize, secondMatrixColumnSize, firstMatrix, secondMatrix, result);

    }

}
