#include <stdio.h>
/**
 * @brief this function returns the size of a variable 
 * @return int the size of the variable
 * @param this is a variable of any data type
 * 
 */
int size_of_variable(int int_variable,float float_variable,double double_variable,char char_variable)
{
    return (int)(int_variable,float_variable,double_variable,char_variable);

}


/**
 *@brief this is the main function
   @return int 0
 */

int main(int argc, char const *argv[])
{
  

    printf("the size of variable of int data type is %d\n the size of variable of float data type is %d\n the size of variable of double data type is %d\n the size of variable of char data type is %d\n",sizeof(int_variable),sizeof(float_variable),sizeof(double_variable),sizeof(char_variable));
}
