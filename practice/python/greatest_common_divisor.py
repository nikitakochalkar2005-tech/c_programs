#@brief Function to find the greatest common divisor (GCD) of two numbers
#@param first_number kisliye use kiya kiyu is maise greatest common divisor nikalana hai 
#@param second_number kisliye use kiya kiyu is maise greatest common divisor nikalana hai 
#@return common_divisor greatest common divisor of two numbers
def greatest_common_divisor( first_number,second_number):
    common_divisor = 1;
    divisor = 1;
    limit = min(first_number, second_number) +1
    for divisor in range(1, limit, 1): 
        if( first_number % divisor == 0 and second_number % divisor == 0 ):
              common_divisor = divisor;

    return common_divisor


print("enter first number")
output = input()
first_number = int(output)
print("enter second number")
output = input()
second_number = int(output)
result = greatest_common_divisor(first_number, second_number)
print("greatest common divisor of", first_number, "and", second_number, "is", result)