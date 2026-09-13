import java.util.Scanner;
class CountNumberOfDigitAnInteger{
    /***
     * @brief this function  give a number of count is an integer
     * @param number: kis number ka digit nikalana hai 
     * @return int: mujhe return count ki value karani hai
     */
static int  digit(int number){
    int count = 0;
    while(number != 0){

        if(number == 0){
            return 1;
        }
        if(number < 0){
            number = - number;
        }
        number = number / 10;
        count++;
    }
    return count;
}
  public static void main(String args[]){
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter the number to count the digit");
    int number = scanner.nextInt();
   
    System.out.println(digit(number));
    scanner.close();
  }
}