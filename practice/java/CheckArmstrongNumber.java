class CheckArmstrongNumber{
    /***
     * @brief this function check wether number is armstrong or not 
     * @param number:armstrong check karane ke ye parameter liya 
     * @return void: return kuch nahi karana hai 
     */

    static void armstrongNumber(int number){
        int digit;
        int reverse = 0;
        int original_number = number;
        while(number != 0){
            digit = number % 10;
            reverse = (reverse * 10) + digit;
            number =  number / 10;
        }
        if( original_number == reverse){
            System.out.println("armstrong number");
        }
        else{
            System.out.println(" not armstrong number");
        }
    }

    public static void main(String args[]){
        armstrongNumber(121);
    }
}