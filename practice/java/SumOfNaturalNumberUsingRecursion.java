import java.util.Scanner;

class SumOfNaturalNumberUsingRecursion{
    /***
     * @brief this function display sum of a natural number using recursion
     * @param natural_number: natural_number parameter isliye liya kiyu mujhe sum kar na hai natural number ka 
     * @return long : natural number ka sum return karana hai 
     */


    static long sumOfNaturalNumber(long natural_number){

        if(natural_number <= 1){
            return natural_number;
        }

        long sum = natural_number + sumOfNaturalNumber(natural_number - 1);
        return sum;
    }
    public static void main(String args[]){
       
       Scanner scanner = new Scanner(System.in);
       System.out.println("enter a natural number to find sum:");
      long  natural_number = scanner.nextInt();
      long result = sumOfNaturalNumber(natural_number);
      System.out.println("sum of natural number is:"+result);
    }
}