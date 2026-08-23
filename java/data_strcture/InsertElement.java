
class InsertElement {

    /**
     * @brief this function insert an element on a given array
     * @param array konte array mai insert karana hai
     * @param item element ko insert karana hai array mai
     * @param k postion mai insert karana array ke andar
     */
    static void InsertElement(int array[], int item, int k, int size) {
        if (k < 0 || k > size) {
            System.out.println("value of k should be greater than zero and less than size of array");

        }

        int newArraySize = size + 1;
        int[] newArray = new int[newArraySize];
        copyArrayElements(array, size, newArraySize, newArray);
        printArrayElements(array, size);
        for (int index = size; index > k; index--) {
            newArray[index] = newArray[index - 1];
        }
        newArray[k] = item;
        System.out.println("after array element");
        printArrayElements(newArray, newArraySize);

    }

    /**
     * @brief this function print the array elements InsertElement
     * @param array konte array ke elements print karana hai
     * @param size array ka size kitana hoga
     */
    static void printArrayElements(int array[], int size) {
        for (int index = 0; index < size; index++) {
            System.out.printf("%d\n", array[index]);
        }

    }

    /**
     * @brief ye function element ko copy karata hai 
     * elements karana hai waha se element shift karega
     * @param array konti array ke elements ko copy karana hai
     * @param size array ki kitani size hai
     */
    static void copyArrayElements(int array[], int size, int newArraySize, int newArray[]) {

        for (int index = 0; index < size; index++) {
            newArray[index] = array[index];
        }

    }

    public static void main(String args[]) {

        int size = 8;
        int[] array = {3, 4, 5, 6, 7, 8, 9, 2};
        printArrayElements(array, size);
        System.out.println("before insert the element");

        InsertElement(array, 56, 6, size);

    }

}
