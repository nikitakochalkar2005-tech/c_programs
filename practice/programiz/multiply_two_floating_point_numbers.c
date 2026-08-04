#include <stdio.h>
/**
 * this function is used to multiply two floating point numbers
 */
float multiply_float(float first_number, float second_number)
{
     float product = first_number*second_number;
     printf("multiplication of two folating poin is %f",product);
}

/**
 * c program to multiply two floating point numbers
 */
int main(int argc, char const *argv[])
{  
//    printf("%d",23);
    multiply_float(89.6, 3.5);
    /* code */
    return 0;
}
