#@brief this function check wether number is prime or not
#@param number: parameter number  isliye liya ki number prime hai ya nahi

def is_prime(number):
    if number <= 1:
        print("invalid")
        return

    if number == 2 or number == 3:
        print("given number is a prime number:",number)
        return

    if number % 2 == 0 or number % 3 == 0:
        print("given number is not a prime number:",number)
        return

    for i in range(5, int(number ** 0.5) + 1, 2):
        if number % i == 0:
            print("given number is not a prime number:", number)
            return

    print("given number is a prime number:", number)


print("enter a number to check number is a prime or not:")
output = input()
number = int(output)
is_prime(number)
