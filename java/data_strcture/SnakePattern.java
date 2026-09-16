
class SnakePattern {

    /*
  *@brief this function display all array elements
  *@param array: is array ko sort karana 
  *@param row_size: array ke andar kitani  row ki  size  hai 
  *@param column_size: array array ke andar kitani column hai 
     */
    static void print_array_elements(int row_size, int column_size, int[][] array) {
        for (int row_index = 0; row_index < row_size; row_index++) {
            for (int column_index = 0; column_index < column_size; column_index++) {
                int element = array[row_index][column_index];
                System.out.print("  ");
                System.out.print(element);
            }
            System.out.println();
        }

    }

    /**
     * *
     * @brief this function traversal the array elements
     */
    static void traversal_array_elements(int row_size, int column_size, int[][] array) {
        for (int row_index = 0; row_index < row_size; row_index++) {
            for (int column_index = 0; column_index < column_size; column_index++) {
                if (row_index % 2 == 0) {
                    System.out.print(array[row_index][column_index]);
                } else {
                    System.out.print(array[row_index][column_size - 1 - column_index]);
                }
                System.out.print("  ");
            }

        }
    }

    /**
     * @brief this function sort the elements of array
     * @param row_size: array mai kitane row hai
     * @param column_size:array mai kitane column hai
     * @return void: mujhe kuch return nahi karana hai mujhe bass function andar
     * operation karana hai
     */
    static void sort_array_elements(int row_size, int column_size, int[][] array) {
        for (int pass = 0; pass < row_size * column_size - 1; pass++) {
            for (int row_index = 0; row_index < row_size ; row_index++) {
                for (int column_index = 0; column_index < column_size - 1; column_index++) {

                    if (array[row_index][column_index] > array[row_index][column_index + 1]) {
                        array[row_index][column_index] = array[row_index][column_index]
                                + array[row_index][column_index + 1];
                        array[row_index][column_index + 1] = array[row_index][column_index]
                                - array[row_index][column_index + 1];
                        array[row_index][column_index] = array[row_index][column_index]
                                - array[row_index][column_index + 1];
                    }
                }
                if (row_index < row_size - 1
                        && array[row_index][column_size - 1] > array[row_index + 1][0]) {
                    array[row_index][column_size - 1] = array[row_index][column_size - 1]
                            + array[row_index + 1][0];
                    array[row_index + 1][0] = array[row_index][column_size - 1]
                            - array[row_index + 1][0];
                    array[row_index][column_size - 1] = array[row_index][column_size - 1]
                            - array[row_index + 1][0];
                }
            }
        }

    }

    public static void main(String args[]) {
        int row_size = 3;
        int column_size = 3;
        int[][] array = {{4, 84, 76}, {98, 34, 56}, {23, 45, 65}};
        print_array_elements(row_size, column_size, array);
        sort_array_elements(row_size, column_size, array);
        traversal_array_elements(row_size, column_size, array);
        System.out.printf("\n");
        print_array_elements(row_size, column_size, array);

    }
}
