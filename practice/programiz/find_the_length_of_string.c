#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("enter a sentence to find a length of sentence:\n");
    char sentence[100];
    scanf("%99s", sentence);
    printf("length of sentence is %zu:", strlen(sentence));
    return 0;
}