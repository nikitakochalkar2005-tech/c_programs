import string

# this function display the characters on a std 
def display_character():
    for character in string.ascii_uppercase:
        print(" ", character)

# is function dusari tarabi likh sakate hai
def display_character1():
    for character in range(ord('A'), ord('Z') + 1):
        print(" ", chr(character))
display_character()
display_character1()
print(type(string.ascii_uppercase))