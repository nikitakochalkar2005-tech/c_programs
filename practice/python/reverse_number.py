# @brief this function reverse a 
#@param number: kis number ko reverse karana hai 

def reverse_number( number):
    reverse = 0
    while(number > 0 ):
        digit = number % 10
        reverse = (reverse * 10) + digit
        number = number // 10
        result = int (reverse) 
    print(result)

print("enter a number to reverse:")
output = input()
number = int(output)
print("reverse number is:")
reverse_number(number)   
