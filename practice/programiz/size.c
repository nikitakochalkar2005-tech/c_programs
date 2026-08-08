#include<stdio.h>



/**
 * @brief function return a integer value size of data type 
 * @return integer
 * @param void
 */
int size_integer()
{
    return sizeof(int);

}
 
int size_double()
{
    return sizeof(double);
}

/**************************** */
int size_float()
{
    return sizeof(float);

}



int main(void)
{
    int double_size = size_float();
    int float_size = size_float();
    printf("%i\n",double_size);
    printf("%i\n",float_size);
    
    return 0;
}
