def remove_all_characters_in_a_string_except_alphabets(sentence, except_alphabet):
    result = ""
    for index in range(len(sentence)):
     if sentence[index] not in except_alphabet:
        result = result + sentence[index]
    print("after removing a character form a string:",result)

    
    

string = "Hello, World! 123"
remove_all_characters_in_a_string_except_alphabets(string, 'o')