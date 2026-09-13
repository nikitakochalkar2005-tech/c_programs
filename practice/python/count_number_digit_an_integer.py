# this function counts the number of digits in an integer
def count_digits(number):
    count = 0
    if number == 0:
        return 1
    if number < 0:
        number = -number 
    while number != 0:
        number //= 10
        count += 1
    return count

print("Enter an integer:")
number = int(input())
print(f"The number of digits in {number} is {count_digits(number)}.")