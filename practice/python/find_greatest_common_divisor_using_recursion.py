def greatest_common_divisor(first_number, second_number):
    if(second_number == 0):
        return first_number
    return greatest_common_divisor(second_number , first_number % second_number)


print("enter a first number to find a greatest common divisor:")
output = input()
first_number = int(output)
print("enter a second number to find a greatest common divisor:")
output = input()
second_number = int(output)
result = greatest_common_divisor(first_number, second_number)
print("greatest common divisor is:",result)