def octal_number_convert_into_decimal_number(octal_number):
    decimal_number = 0
    weight = 1
    while(octal_number > 0):
        remainder = octal_number % 10
        decimal_number = decimal_number + (remainder * weight)
        weight = weight * 8 
        octal_number = octal_number // 10
    return decimal_number


print("enter a octal number convert into decimal number:")
output = input()
octal_number = int(output)
decimal_number = octal_number_convert_into_decimal_number(octal_number)
print("given octal number is converted into a decimal number:",decimal_number)