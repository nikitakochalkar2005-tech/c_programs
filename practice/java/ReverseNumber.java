import java.util.Scanner;

class ReverseNumber {
    /***
     * @brief this function reverse a number
     * @param number kis number ko reverse karana hai 
     * @return int : mujhe return karana hai reverse number
     */
  static int   number(int number){
    int digit;
    int reverse = 0;
    while (number > 0) {
        
        digit = number % 10;
        reverse = (reverse *10) + digit;
        number = number / 10;
    }
    return reverse;
    }
    
public static void  main(String args[]){
    Scanner scanner = new Scanner(System.in);
    System.out.println("enter a number");
    int number = scanner.nextInt();
    int result = number(number);
    System.out.println("reverse number is:"+result);
}
}
