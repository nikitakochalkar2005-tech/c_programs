import math
#@brief this function calculate power of a number
#@param base_number: base number  kya hai 
#@param exponent_number: exponent number kya hai 

def calculate_power_of_number(base_number,exponent_number):
    result = math.pow(base_number,exponent_number)
    print("power of given number is:",result)


print("enter a base number:")
output = input()
base_number = int(output)
print("enter a exponent number:")
output = input()
exponent_number = int(output)
calculate_power_of_number(base_number,exponent_number)