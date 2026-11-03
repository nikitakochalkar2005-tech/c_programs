def frequency_of_character(string):
    frequnecy = {}
    for character in range(0, len(string)):
        character = string[character]
        frequnecy[character] = frequnecy.get(character, 0) + 1
    for ascill_value in range(0, 256):
        character = chr(ascill_value)
        if frequnecy.get(character, 0) > 0 and character != " ":
            print(f"{character} : {frequnecy[character]}")

print("Enter a string to find the frequency of characters in it: ")
string = input()
frequency_of_character(string)