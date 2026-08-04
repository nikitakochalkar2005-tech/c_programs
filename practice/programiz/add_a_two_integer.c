#include <stdio.h>

/**
 * this function is used to add two integers
 */
void add_integers(int integer1, int integer2)
{
     
    int integer_sum = integer1 + integer2;
     printf("The sum of %d and %d is: %d\n", integer1, integer2, integer_sum);
}

/**
 *program to add two integers
 */
int main(void){
// {   printf("%d",5);
    add_integers(20,30);
     return 0;
}
