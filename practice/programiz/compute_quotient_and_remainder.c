#include <stdio.h>

/**
 * @brief this function returns the quotient and remainder of two numbers
 * @return the quotient and remainder of two numbers
 * @param two integers 
 */
 
int quotient_remainder(int quotient, int remainder)
{
   
    return (int)quotient, remainder;
}






/**
 * 
 * @brief this is the main function
 * @return int 0
 */

int main(int argc, char const *argv[])
{
   int number1 = argv[1];
   int number2 = argv[2];
   int quotient = number1 / number2;
   int remainder = number1 % number2;
   

   printf("the value of quotient is: %d\n the value of remainder is %d\n", quotient, remainder);
   
    return 0;
}
