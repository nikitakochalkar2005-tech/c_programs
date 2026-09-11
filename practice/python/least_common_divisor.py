### @brie f this function take two numbers and return the greatest common divisor of the two numbers
#@param firs_number isle use kiya kiyu ki hame two numbers ka greatest common divisor nikalna hai
#@param second_number isle use kiya kiyu ki hame two numbers ka greatest common divisor nikalna hai
#@return int  greatest common divisor of the two numbers
#@var gcd means greatest common divisor 


def greatest_common_divisor(first_number,second_number):
    gcd = 0
    limit = min(first_number , second_number) + 1
    for divisor in range(1,limit) :
     if ( first_number % divisor == 0 and second_number % divisor == 0) :
        print("common divisor is:",divisor)
        gcd = divisor
    return gcd

#@brief this function take two numbers and return the least common divisor of the two numbers
#param firs_number isle use kiya kiyu ki hame two numbers ka least common divisor nikalna hai
#param second_number isle use kiya kiyu ki hame two numbers ka least common divisor
#return int  least common divisor of the two numbers
#@var lcm means least common value 

def least_common_divisor(first_number,second_number):
    gcd = greatest_common_divisor(first_number,second_number)
    lcm = first_number * second_number / gcd 
    return lcm

print("enter a first number two find least common value:")
output = input()
first_number = int(output)
print("enter a second number two find least common value:")
output = input()
second_number = int(output)
lcm = least_common_divisor(12,18)
print(lcm)