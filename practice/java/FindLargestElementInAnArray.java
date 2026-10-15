import java.util.Scanner;
class FindLargestElementInAnArray{


    static int largestElement(int[] array, int array_size){
        
        int max = array[0];
        for(int index = 1; index < array_size; index++){
            if(array[index] > max){
                max = array[index];
            }
        }
        return max;
    }

    public static void main(String args[]){
        System.out.println("enter array size:");
        Scanner sc = new Scanner(System.in);
        int array_size = sc.nextInt();
        int[] array = new int[array_size];
        for(int index = 0; index < array_size; index++){
            System.out.println("enter a array element at index "+index);
            array[index] = sc.nextInt();
            System.out.println("element at index " + index + " is " + array[index]);
        }
        int largest = largestElement(array, array_size);
        System.out.println("largest element in array is: " + largest);
        sc.close();
    }
}