package java;

class FindTransposeOfAMatrix {

    static void displayMatrixElements(int[][] matrix) {
        for (int rowIndex = 0; rowIndex < 3; rowIndex++) {
            for (int columnIndex = 0; columnIndex < 3; columnIndex++) {
                System.out.printf("%d\t", matrix[rowIndex][columnIndex]);
            }
            System.out.println();
        }
    }

    static void findTransposeOfMatrix(int[][] matrix) {
        int[][] transposeMatrix = new int[3][3];
        for (int rowIndex = 0; rowIndex < 3; rowIndex++) {
            for (int columnIndex = 0; columnIndex < 3; columnIndex++) {

                System.out.printf("%d\t", matrix[columnIndex][rowIndex]);
            }
            System.out.println();
        }

    }

    public static void main(String[] args) {
        int[][] matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        System.out.println("Matrix Elements:");
        displayMatrixElements(matrix);
        System.out.println("Transpose of Matrix:");
        findTransposeOfMatrix(matrix);
    }

}
