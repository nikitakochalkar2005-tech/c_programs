class DisplayFactorialOfANumber {
   /**
    * @brief this function display factorial of a number
    * @param number: parameter number is liya kiyu hamai number ke factorial find karana hai 
    * @return void: return kuch nahi karana hai 
    */

static void displayFactorialOfNumber(int number){
    int factorial;
    for( int division = 1; division <= number; division++){
        factorial = number % division;
        if(factorial == 0){
            System.out.printf("%d factorial is:%d\n",number,division);
        }
    }

}
public static void main(String args[]){
    displayFactorialOfNumber(12);
}




}