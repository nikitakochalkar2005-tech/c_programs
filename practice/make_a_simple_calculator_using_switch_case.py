#@brief this function is used to add two numbers
#@param first_number: first number to add
#@param second_number: second number to add
#@return: sum of two numbers
def addition(first_number, second_number):
    return first_number + second_number
#@brief this function is used to subtract two numbers
#@param first_number: first number to subtract
#@param second_number: second number to subtract
#@return: difference of two numbers
def subtraction(first_number, second_number):
    return first_number - second_number

#@brief this function is used to multiply two numbers
#@param first_number: first number to multiply
#@param second_number: second number to multiply
#@return: product of two numbers
def multiplication(first_number, second_number):
    return first_number * second_number

#@brief this function is used to divide two numbers
#@param first_number: first number to divide
#@param second_number: second number to divide
#@return: quotient of two numbers

def division(first_number, second_number):
    return first_number / second_number

#@brief this function is used to find remainder of two numbers
#@param first_number: first number to find remainder    
#@param second_number: second number to find remainder
#@return: remainder of two numbers
def remainder(first_number, second_number):
    return first_number % second_number

print("Enter first number:")
first_number = int(input())
print("Enter second number:")
second_number = int(input())
print("Enter operator:/,+,-,*,/,%")
operator = input()
match operator:
    case "+":
        result = addition(first_number, second_number)
        print("result:" + str(result))
    case "-":
        result = subtraction(first_number, second_number)
        print("result:" + str(result))
    case "*":
        result = multiplication(first_number, second_number)
        print("result:" + str(result))
    case "/":
        if second_number == 0:
            print("division by zero is not allowed")
        else:
            result = division(first_number, second_number)
            print("result:" + str(result))
    case "%":
        if second_number == 0:
            print("division by zero is not allowed")
        else:
            result = remainder(first_number, second_number)
            print("result:" + str(result))
    case _:
        print("invalid operator")