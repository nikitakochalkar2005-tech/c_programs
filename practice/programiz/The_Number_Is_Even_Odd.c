#include<stdio.h>
/***
 * @brief in this program we check number is even or odd by teaking thourgh user input
 * @return int 
 * @implements number%2 == 0 ; this satements is aplicable for even number
 */
int main()
{   
    int num;
    printf("Enter the Number is: ");
    scanf("%i",&num);
    if (num%2 == 0)
    {
        printf("the number is even %i",num);

    }
    else
    {
        printf("the number is odd %i",num);
    }
    return 0;
}