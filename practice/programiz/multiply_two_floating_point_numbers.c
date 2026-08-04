#include <stdio.h>
/**
 * this function is used to multiply two floating point numbers
 */
float multiply_float(float first_number, float second_number)
{
    float product = first_number * second_number;
    return product;
}

/**
 * c program to multiply two floating point numbers
 */
int main(int argc, char const *argv[])
{
    //    printf("%d",23);

    float product = multiply_float(89.6, 3.5);
    printf("product of two floating point numbers is: %.3f", product);

    /* code */
    return 0;
}
