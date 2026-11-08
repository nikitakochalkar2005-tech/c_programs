#include <stdio.h>
#include <string.h>
/**
 * @brief this function remove all character in a string except alphabets
 * @param sentence: kis sentence se alphabets remove karana hai
 * @param except_alphabets_for_remove: kis alphabets ko remove karana hai uske liye ye wala parameter
 * return void: kuch return nahi karana hai
 */
void remove_all_characters_in_a_except_alphabets(char sentence[], char except_alphabets_for_remove)
{
    printf("before removing the except alphabets %s\n:", sentence);
    for (int index = 0; index < (int)strlen(sentence); index++)
    {
        if (sentence[index] == except_alphabets_for_remove)
        {
            memmove(sentence + index, sentence + index + 1, strlen(sentence) - index);
            index--;
        }
    }
    printf("after remove all character for a except alphabets %s:\n", sentence);
}

int main()
{
    char except_alphabets_for_remove;
    printf("enter a sentence\n");
    char sentence[100];
    scanf("%[^\n]%*c", sentence);   
    printf("enter a character which you want to remove from the sentence\n");
    scanf("%c", &except_alphabets_for_remove);
    remove_all_characters_in_a_except_alphabets(sentence, except_alphabets_for_remove);
    return 0;
}