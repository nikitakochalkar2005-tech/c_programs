#include<stdlib.h>
#include<stdio.h>


/**
 * @brief this function return integer value swaping the number 
 * @return integer
 * @param int 
 */



int main(int num1 , char const *argv[] )
{
  if (num1<1)
  {
    int void_number = num1;
    printf("%i\n",void_number);
  }
  //int void_number = num1;
  
  int swaping_number = atoi(argv[1]);
  int  swaping_number2 = atoi(argv[2]);
   int temp = swaping_number2;
   swaping_number2 = swaping_number ;
    printf("%i\n",temp);
    printf("%i\n",swaping_number);
  
  return 0;
}






