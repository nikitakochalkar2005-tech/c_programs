class DisplayPrimeNumbersBetweenIntervalsUsingFunction {
   static void  primeNumberBetweenTwoIntervals(int start_number, int end_number){
        for( int number = start_number; number <= end_number; number++){
            int  prime = 1;
            if( number <2){
                prime = 0;
            }
            if(number == 2 || number == 3){
                prime = 1;
            }
            if( number > 3 && ( number % 2 == 0 || number % 3 == 0)){
                prime = 0;
            }
            for( int i = 5; i*i < number ; i += 2){
                if( number % i == 0 || number % (i + 2) == 0){
                    prime = 0;
                }
            }
           if(prime == 1){
             System.out.println("it a prime number"+number);
         }
        }

    }
    public static void main(String args[]){
        primeNumberBetweenTwoIntervals(2,10);
    }
}