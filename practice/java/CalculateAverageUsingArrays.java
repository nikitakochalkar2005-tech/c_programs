
import java.util.Scanner;

class CalculateAverageUsingArrays {

    /**
     * @brief this function display a average of a arrays
     * @param array: kis array ko average nikalana hai
     * @param array_size: array ki size kyahogi
     */

    static int Average(int[] array, int array_size) {
        int average = 0;
        int numbers_sum = 0;
        for (int index = 0; index < array_size; index++) {
            numbers_sum = numbers_sum + array[index];

        }
        average = numbers_sum / array_size;
        return average;
    }

    static void main(String args[]) {
        System.out.println("enter a array size:");
        Scanner scanner = new Scanner(System.in);
        int array_size = scanner.nextInt();
        int[] array = new int[array_size];
        for (int index = 0; index < array_size; index++) {
            System.out.println("enter a array element at index:" + index);
            array[index] = scanner.nextInt();
            System.out.println("array element at index " + index + " is " + array[index]);
        }
        int average = Average(array, array_size);
        System.out.println("average of array is " + average);
    }

}
