
class MultiplyTwoMatricesUsingMultidimensionalArray {

    static void multiplyMatrices(int[][] firstMatrix, int[][] secondMatrix) {
        int[][] result = new int[firstMatrix.length][secondMatrix[0].length];
        for (int index_row = 0; index_row < firstMatrix.length; index_row++) {
            for (int index_column = 0; index_column < secondMatrix[0].length; index_column++) {
                for (int counter = 0; counter < secondMatrix.length; counter++) {
                    result[index_row][index_column] += firstMatrix[index_row][counter] * secondMatrix[counter][index_column];
                }
                System.out.print(result[index_row][index_column] + " ");

            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int firstMatrix[][] = {{2, 4}, {3, 4}};
        int secondMatrix[][] = {{1, 2}, {1, 3}};
        multiplyMatrices(firstMatrix, secondMatrix);
    }
}
