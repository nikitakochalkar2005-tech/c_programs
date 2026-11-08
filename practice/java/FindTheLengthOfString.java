import java.util.Scanner;
class FindTheLengthOfString{
public static void main(String args[]){
System.out.println("enter a string to find length:");
    Scanner scanner = new Scanner(System.in);
    String sentence = scanner.nextLine();
    System.out.println("length of string = "+(sentence.length()));
}
}
    