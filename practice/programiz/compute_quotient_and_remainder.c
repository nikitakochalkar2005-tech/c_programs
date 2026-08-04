#include<stdio.h>
int main(){
    int dividend,divisor,remainder,quotient;

    printf("enter the dividend :");
    scanf("%d",&dividend);
    printf("enter the divisor :");
    scanf("%d",&divisor);
    remainder = dividend%divisor;
    quotient = dividend/divisor;
    printf("the quotient is:%d\n",quotient);

    printf("the remainder is:%d\n",remainder);

}