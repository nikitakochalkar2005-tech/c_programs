import java.util.Scanner;


class EvenOdd{
    public static void main(String args[])

    {
       int num;
      ;
      Scanner input = new Scanner(System.in);
       System.out.println("Enter a  Number:\n");  

       num = input.nextInt();
       if(num%2 ==0)
       {
        System.out.println("The Number Is Even:"+num);
       }
       else {
         System.out.println("The Number Is Odd:"+num);
       }

       
    }
}