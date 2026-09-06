#include <stdio.h>
#include <string.h>
/**
 * @brief This function checks if a given year is a leap year or not.
 * @param year  parameter ka isliye likha hai kiyu hame ye dikhane year leap hai ya nahi
 * @return  void isliye likha hai kiyu mujhe action prefrom karani hai
 */
void check_leap_year(int year)
{

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("it a leap year:%i\n", year);
    }
    else
    {
        printf("it a not leap year:%i\n", year);
    }
}

int main(void)
{
    printf("====================== LEAP YEAR CHECKER ======================\n");
    int year;
    printf("please enter the year:");
    scanf("%i", &year);
    check_leap_year(year);
    return 0;
}
