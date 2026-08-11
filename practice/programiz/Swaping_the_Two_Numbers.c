/***
* @brief in this program we swaping a two number useing third variable 
* @return is zero 
* @
 */
#include<stdio.h>
int main(){
    int num;
    int temp;
    
    int num2;
    
    printf("plz enter a number ");
    scanf("%d",&num);
    printf("plz enter a number ");
    scanf("%d",&num2);
    
    printf("before swaping a number is:%d\n",num);
    printf("before swaping a number is:%d\n",num2);
    // temp = num;
    // num2 = temp;
    // num = num2;
    temp = num;
    num = num2;
    num2 = temp;

    
    
    printf("After swaping a number is:%d\n",num);
    printf("After swaping a number is:%d\n",num2);
    return 0;
}