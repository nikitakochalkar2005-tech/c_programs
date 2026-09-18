#@brief this function displays factors of a number
#@param number: input number whose factors need to be found
#@return: None

def display_factors_of_number(number):
    for divisor in range(1, number + 1):
        if number % divisor == 0:
            print("factor of a number is:", divisor)


display_factors_of_number(12)
