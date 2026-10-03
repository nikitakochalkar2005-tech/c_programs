def reverse_sentence(sentence):
    # Base case: if the sentence is empty or has only one character, return it as is
    if len(sentence) <= 1:
        return sentence

    # Recursively reverse the substring after the first character,
    # then append the first character at the end.
    return reverse_sentence(sentence[1:]) + sentence[0]


print(reverse_sentence("Hello World"))  # Output: "dlroW olleH"
    