import java.util.Scanner;
class FindLargestNumberUsingDynamicMemoryAllocation {

    /**
     * @brief this fucntion display largest number from the given array
     * @param arr[] array of numbers
     * @param size size of the array
     * @return int: largest number from the given array
     */
    static int findLargestNumber(int arr[], int size) {
        int largest = arr[0];
        for (int index = 1; index < size; index++) {
            if (arr[index] > largest) {
                largest = arr[index];
            }
        }
        return largest;
    }

    public static void main(String[] args) {
        System.out.println("Enter the size of the array: ");
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        if(size <= 0){
            System.out.println("invalid size:");
            sc.close();
            return;
        }

        int[] array = new int[size];
        for (int index = 0; index < size; index++) {
            System.out.println("Enter an array element at index: " + index);
            array[index] = sc.nextInt();
        }

        int maxNumber = findLargestNumber(array, size);
        System.out.println("Largest number is: " + maxNumber);
        sc.close();
    }
}
