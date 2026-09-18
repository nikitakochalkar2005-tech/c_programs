#@brief this function display prime numbers between two intervals
#@param start: starting interval
#@param end: ending interval
#@return: None
def display_prime_numbers_between_two_intervals(start_number, end_number):
    for number in range(start_number, end_number + 1):
        isprime = True
        if(number < 2):
            isprime = False
        if ( number !=2 and number != 3  and ( number % 2 == 0 or number % 3 == 0)):
            isprime = False
        for i in range(5, int(number ** 0.5) + 1, 6):
            if (number % i == 0 or number % (i + 2) == 0):
                isprime = False
                break
        if isprime:
            print("it is a prime number: ", number)


print("Enter the starting interval: ")
start_number = int(input())
print("Enter the ending interval: ")
end_number = int(input())
display_prime_numbers_between_two_intervals(start_number, end_number)