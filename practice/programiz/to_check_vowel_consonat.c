/**
 * 
 * 
 * @brief in this program return the char value .if it vowel or not 
 * @attention display the char it vowel or not 
 * ** vowel is o u a e i 
 */
#include<stdio.h>
 int main()
 {
  char c ;
  int upper_vowel , lower_vowel ;
  printf("Enter  a Alphabet");
  scanf("%c",&c);
  upper_vowel = (c == 'A' || c == 'U' || c == 'O' || c == 'E' || c == 'I');
  lower_vowel = (c == 'a'|| c == 'u' || c == 'o' || c == 'e' || c == 'i'); 

  if (upper_vowel || lower_vowel)
  {

    printf("it a vowel %c ",c);
  }
  else 
  {

    printf("it is not  vowel %c ",c);
  } 

return 0 ; 

}