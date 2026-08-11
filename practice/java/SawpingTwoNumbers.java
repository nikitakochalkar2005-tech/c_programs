
import java.util.Scanner;

class SawpingTwoNumbers{
   public static void main(String[] args) {
       

    int temp;
    int num;
    int num2;
    Scanner input = new Scanner(System.in);
    System.out.println("Enter a Frist Number:\n");  
    num = input.nextInt();
    Scanner input1 = new Scanner(System.in);
    System.out.println("Enter a Second Number:\n");
     num2 = input1.nextInt();
    System.out.println("Before Swaping the value is:"+num);
    System.out.println("Before Swaping the value is:"+num2);
    temp = num;
    num = num2;
    num2 = temp;
    System.out.println("After Swaping the value is:"+num);
    System.out.println("After  Swaping the value is:"+num2);
    

   input.close();


   }

}
