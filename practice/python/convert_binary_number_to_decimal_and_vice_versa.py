def binary_digit_covert_into_decimal_digit(binary):
     decimal = 0
     weight = 1 
     while(binary > 0):
        remainder = binary % 10 
        decimal = decimal + (remainder * weight)
        weight = weight * 2
        binary = binary // 10
     return decimal



print("enter the binary digit to convert into decimal digit:")
output = input()
binary = int(output)
decimal_digit = binary_digit_covert_into_decimal_digit(binary)
print(binary,"binary digit convert into decimal digit",decimal_digit)