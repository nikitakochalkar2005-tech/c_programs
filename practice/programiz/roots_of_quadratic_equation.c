#include <stdio.h>

/**
 * @brief in this program find the roots of quadratic equation
 */
int main(void)
{
    int a, b, c;
    printf("enter a value of a:\n");
    scanf("%i", &a);
    printf("enter a value of b:\n");
    scanf("%i", &b);
    printf("enter a value of c:\n");
    scanf("%i", &c);
    int Discriminant = (b * b - 4 * a * c);
    if (Discriminant > 0)
    {
        printf("two different real roots\n");
    }
    else if (Discriminant == 0)
    {
        printf("two real some roots\n");
    }
    else if (Discriminant < 0)
    {
        printf("not real roots\n");
    }

    return 0;
}
