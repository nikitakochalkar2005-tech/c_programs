#include <stdio.h>

int print_integer_size()
{
 return sizeof(int);
}

/***
 * @brief the print_float_size function returns the size of float data type
 * @return float value 
 * 
 * 
 */
float print_float_size()
{

  return sizeof(float);
}
/**
 * @brief the print_double_size function returns the size of double data type
 * @return double value
 */
double print_double_size()
{
  return sizeof(double);
}
/**
 * @brief the print_char_size function returns the size of char data type
 * @return char value
 */
char print_char_size()
{
  return sizeof(char);
}
/**
 * @brief the print_short_int_size function returns the size of short int data type
 * @return integer value
 */
int print_short_int_size()
{
  return sizeof(short int);
}

/**
 * @brief the print_long_int_size function return the size of long int data type
 * @return the integer value
 */
long int print_long_int_size()
{

  return sizeof(long int);
}
/**
 * @brief the print_long_long_int function return the size of long long int data type 
 * @return the integer value
 */
long long int print_long_long_int()
{
  return sizeof(long long int);
}
/**
 * @brief the print_long_double function return the size of long double data type 
 * @return the integer value 
 */
long double print_long_double()
{

  return sizeof(long double);
}





/**
 *@brief this is the main function
   @return int 0
 */

int main(void)
{
  
   int size_integer = print_integer_size();
   int size_float = print_float_size();       // gar mai int ke jaga float likha ta to aise value mili 4.000
   int size_double = print_double_size();     //gar mai int ke jaga double likha size_double mai  to aise value mili 8.000
   int size_char = print_char_size();         // maine char rakha  size_char ko to same 1 bytes or int rakha bhi to same mila 1 bytes 
   int size_short_int = print_short_int_size();
   long int size_long_int = print_long_int_size();// maine char rakha  size_long_int ko to same 4 bytes or int rakha bhi to same mila 4  bytes 
   long long int  size_long_long_int = print_long_long_int();// same concept as line 88
   int  size_long_double = print_long_double(); //gar mai int ke jaga  long double likha size_double mai  to aise value mili 16.000
   printf("size of integer is %i bytes",size_integer);
   printf("\nsize of char is %i bytes",size_char);
   printf("\nsize of float is %i bytes",size_float);
   printf("\nsize of double is %i bytes",size_double);
   printf("\nsize of short int is %i bytes",size_short_int);
   printf("\nsize of long int is %li bytes",size_long_int);
   printf("\nsize of long long int is %lli bytes",size_long_long_int);
   printf("\nsize of long double is %i bytes",size_long_double);
 return 0;
}
