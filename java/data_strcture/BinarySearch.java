
import java.util.Scanner;

class binarySearch {

    /**
     * @brief in this function print the array elements
     * @param array konte array ko print karana hai
     * @param size array ki size kitani hogi
     */
    static void printArrayElements(int[] array, int size) {
        for (int index = 0; index < size; index++) {
            System.out.println(+array[index]);
        }

    }

    /**
     * @brief in this function sort the array elements
     * @param array konte array ko sort karana hai
     * @param size array ki size kitani hogi
     */
    static void sortArrayElements(int[] array, int size) {
        for (int counter = 0; counter < size; counter++) {
            for (int index = 0; index < (size - 1); index++) {
                if (array[index] > array[index + 1]) {
                    array[index] = array[index] + array[index + 1];
                    array[index + 1] = array[index] - array[index + 1];
                    array[index] = array[index] - array[index + 1];
                }

            }
        }

    }

    /**
     * *
     * @brief in this function search a element from a sorting array
     * @param array konte array mai se element ko search karana hai
     * @param size array size kitani hogi
     * @param key konte element ko search karna hai
     */
    static int binarySearch(int[] array, int size, int key) {
        int base_index = 0;
        int higher_index = size - 1;
        while (base_index <= higher_index) {
            int middle_index = (base_index + higher_index) / 2;
            int middle_key = array[middle_index];
            if (key == middle_key) {
                return middle_index;
            } else if (key < middle_key) {
                higher_index = middle_index - 1;
            } else {
                base_index = middle_index + 1;
            }
        }
        return -1;

    }

    public static void main(String args[]) {
        int size = 6;
        int[] array = {34, 76, 54, 74, 90, 6};
        System.out.println("choice the option");
        System.out.println("1. print the array elements");
        System.out.println("2. sort the array elements");
        System.out.println("3. search the element from array");
        Scanner sc = new Scanner(System.in);
        int choice = sc.nextInt();

        switch (choice) {
            case 1:
                printArrayElements(array, size);
                break;
            case 2:
                sortArrayElements(array, size);
                printArrayElements(array,size);
                break;
            case 3:
                sortArrayElements(array, size);
                printArrayElements(array, size);
                Scanner sc1 = new Scanner(System.in);
                System.out.println("Enter the element to search:");
                int key = sc1.nextInt();
                sc1.close();
                int search_index = binarySearch(array, size, key);
                if(search_index == -1){
                    System.out.println("element is a not found");
                }
                else{
                    System.out.println("The element is found at index: " + search_index);
                     break;
                }
                
            default:
                System.out.println("Invalid choice");
                break;
        }

    }

}
