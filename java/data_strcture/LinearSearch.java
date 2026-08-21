
import java.util.Scanner;

class LinearSearch {

    /**
     * @brief this function print the array elements
     * @param array kis array mai ke elements print karana hai
     * @param size array ki size kitani hogi
     * @return kuch return nahi karana hai
     */
    static void printArrayElements(int array[], int size) {
        for (int index = 0; index < size; index++) {
            System.out.println(array[index]);
        }
    }

    /**
     * @brief this function search array element
     * @param array kis array ke element search karana hai
     * @param key konte element ko search karana hai
     * @return void kuch return nahi karana hai
     */
    static void searchArrayElement(int array[], int key, int size) {
        for (int index = 0; index < size; index++) {
            if (array[index] == key) {
                System.out.printf("index of a key is:%d\n", index);
                System.out.printf("key value is:%d\n", key);
            }
        }
    }

    /**
     * brief this function delete a index value in an array
     *
     * @param array konte array maise index value delete karani hai
     */
    static void deleteArrayElement(int array[], int index) {
        array[index] = 0;

    }

    /**
     * @brief this function sorting the elements of array
     * @param konte array ko sort karana hai
     * @param
     *
     */
    static void sortArrayElements(int array[], int size) {
        for (int Counter = 0; Counter < size; Counter++) {
            for (int index = 0; index < (size - 1); index++) {
                int first_number = array[index];
                int second_number = array[index + 1];
                if (first_number > second_number) {
                    array[index] = array[index] + array[index + 1];
                    array[index + 1] = array[index] - array[index + 1];
                    array[index] = array[index] - array[index + 1];
                }

            }
        }

    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int size = 5;
        int array[] = {4, 3, 1, 6, 5};
        System.out.println("press 1 to print the array elements:");
        System.out.println("press 2 to search a array element:");
        System.out.println("press 3 to delete a index value:");
        System.out.println("press 4 to sorting the array elements");

        int input = scanner.nextInt();
        switch (input) {
            case 1:
                printArrayElements(array, size);
                break;
            case 2:
                System.out.println("enter a key value:");
                int key = scanner.nextInt();
                searchArrayElement(array, key, size);

                break;
            case 3:
                System.out.println("before delete array elements");
                printArrayElements(array, size);
                System.out.println("Please enter a index of a element you want to delete :");
                int index = scanner.nextInt();
                deleteArrayElement(array, index);
                System.out.println("after delete array elements");
                printArrayElements(array, size);
                break;
            case 4:
                System.out.println("before sorting the array elements");
                printArrayElements(array, size);
                sortArrayElements(array, size);
                System.out.println("after sorting the array elements");
                printArrayElements(array, size);
                break;

        }

    }
}
