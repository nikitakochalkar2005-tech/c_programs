#@brief this function display factorial of a number
#@param number: number parameter is liye kiyu hame number ke factorial chahiye
#@return void:

def display_factorial_of_a_number(number):
    for division in range(1, number + 1):
        factorial = number % division
        if( factorial == 0):
            print("The factorial of", number, "is:", division)

print("enter a number to find factorial")
output = input()
number = int(output)
display_factorial_of_a_number(number)