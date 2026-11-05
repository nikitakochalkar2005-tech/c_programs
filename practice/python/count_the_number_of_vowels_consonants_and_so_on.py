def count_the_number_of_vowel_consonants(string):
    digit = 0
    consonants = 0
    vowel = 0
    spaces = 0
    for index in range(len(string)):
        if string[index].isalpha():
            if string[index].lower() in "aeiou":
                vowel += 1
            else:
                consonants += 1
        elif string[index].isdigit():
            digit += 1
        if string[index] == " ":
            spaces += 1
    print("Number of vowels:", vowel)
    print("Number of consonants:", consonants)
    print("Number of digits:", digit)

    print("Number of spaces:", spaces)

print("Enter a string:")
string = input()
count_the_number_of_vowel_consonants(string)