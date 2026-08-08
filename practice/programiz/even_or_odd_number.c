#include<stdio.h>
#include<stdlib.h>

/**
 * @brief this function find the number is even or odd return int value 
 * 
 * @return int value 
 * @param int number
 */


int main(int argc, char const *argv[])
{     if (argc<1){

      int num  = argc ;
     printf("%i\n",num);
    }
    
    int  num1 = atoi(argv[1]);
     if (num1%2 == 0){
      printf("number is even :%i\n",num1);  
     }
    else{
    printf("number is odd:%i\n",num1);
    }

    return 0;
}
