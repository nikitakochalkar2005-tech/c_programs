class GreatestCommonDivisor{
    /**
     * @brief this function display the greatest common divisor 
     */
  static void   commonDivisor(int first_number,int second_number){
    int greatestCommonDivisor = 1;
    for(int divisor = 1; divisor <=first_number && divisor <= second_number; divisor++ ){
        if( first_number % divisor == 0 && second_number % divisor == 0){
            System.out.println("common divisor is:divisor"+divisor);
            greatestCommonDivisor = divisor;
        }
    }
    System.out.println("greatest common divisor is:"+greatestCommonDivisor);

    }
    public static void main(String args[]){
        commonDivisor(12,18);
    }
}