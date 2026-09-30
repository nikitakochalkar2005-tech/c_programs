#@brief this function display a factorial of a number
#@param number : parameter number isliye kiyu mujhe is nummber ka factorial nikalana hai
#@ return int : factorial number return karega function

def factorial_of_a_number(number) : 
    if (number == 1) : 
      return 1 
    number = number * factorial_of_a_number(number - 1)
    return number

print("enter a number to find a factorial:")
output = input()
number = int(output)
result = factorial_of_a_number(number)
print("factorial of a number is:", result)