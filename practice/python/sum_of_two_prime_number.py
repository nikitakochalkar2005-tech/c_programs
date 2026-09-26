#@brief this function check wether a number is prime or not 
#@param first_number : check a number is prime or not
#@param second_number : check a number is prime or not
#@return int: prime number value return

def is_prime(first_number,second_number):
    prime = 1

    if( first_number < 2 or second_number < 2):
        prime = 0
    if((first_number == 3 or first_number == 2) or (second_number == 3 or second_number == 2)):
        prime = 1
    if((first_number > 2 and first_number % 2 == 0) or (first_number > 3 and first_number % 3 == 0) or (second_number > 2 and second_number % 2 == 0) or (second_number > 3 and second_number % 3 == 0)):
        prime = 0
    for i in range(5, max(first_number, second_number) + 1, 6):
        if (i * i <= first_number and (first_number % i == 0 or first_number % (i + 2) == 0)) or (i * i <= second_number and (second_number % i == 0 or second_number % (i + 2) == 0)):
            prime = 0
    if prime == 1:
        return first_number + second_number
    else:
        print(" both numbers are not prime.")
        return 0
    
print("Enter first number:")
first_number = int(input())
print("Enter second number:")
second_number = int(input())
sum = is_prime(first_number, second_number)
if sum != 0:
    print("Sum of the prime numbers is:", sum)