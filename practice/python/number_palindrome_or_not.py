def number_palindrome_or_not(number):
  
    reverse = 0;
    original = number
    while(number != 0):
        digit = number % 10
        reverse = (reverse * 10) + digit
        number =  number // 10
    if(original == reverse ):
        print("number is a palindrome")
    else:
       print("number is a  not palindrome")
                                  


print("enter a number")
output = input()
number = int(output)
number_palindrome_or_not(number)