#include <stdio.h>
#include <string.h>

/**
 * @brief this function reverse a sentence using recursion
 * @param sentence: sentence parameter isliye kiyu mujhe sentence ko reverse karana hai
 * @return void: mujhe kuch return nahi karana hai function ko
 */

char *reverse_a_sentence(char *sentence)
{
    if (sentence == NULL)
    {
        return NULL;
    }
    int start = 0;
    int end = strlen(sentence) - 1;
    while (start < end)
    {
        char temp = sentence[start];
        sentence[start] = sentence[end];
        sentence[end] = temp;
        start++;
        end--;
    }
    return sentence;
}

int main(void)
{

        char str[] = "nikita";
    printf("%s", reverse_a_sentence(str));
}