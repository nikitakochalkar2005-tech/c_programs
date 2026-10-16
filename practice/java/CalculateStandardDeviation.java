import java.util.Scanner;

class CalculateStandardDeviation{


    static void deviation(int array[],int array_size){
        double average;
        double sum = 0;
        double deviation_of_number;
        for(int index = 0; index < array_size; index++){
           sum = sum + array[index];

        }
        average = sum / array_size;
        for(int index = 0; index < array_size; index++){
            deviation_of_number = average - array[index];
            System.out.println("element"+array[index]+"is:="+deviation_of_number);

        }
    }
    public static void main(String args[]){
       
        System.out.println("enter a array size:");
        Scanner scanner = new Scanner(System.in);
        int array_size = scanner.nextInt();
        int array[] = new int[array_size];
        for(int index = 0; index < array_size; index++){
            System.out.println("enter an array element at index: " + index);
            array[index] = scanner.nextInt();
        }
       scanner.close();
        deviation(array,array_size);

    }
}