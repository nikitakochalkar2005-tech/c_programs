#@brief this function check  armstrong number or not
#@param number: number to check armstrong number or not
#@return void
def check_armstrong_number(number):
   
    reverse = 0
    original_number = number
    while number > 0:
        digit = number % 10
        reverse = reverse * 10 + digit
        number //= 10
    if reverse == original_number:
        print(f"{original_number} is an Armstrong number")
    else:
        print(f"{original_number} is not an Armstrong number")


print("Enter a number to check if it is an Armstrong number or not:")
output = input()
number = int(output)
check_armstrong_number(number);