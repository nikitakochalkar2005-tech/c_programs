
class RemoveAllCharacterInAStringExceptAlphabets {

    /**
     * @brief this function remove a character form a string
     * @param sentence[]: is sentence mai se except alphabets ke character
     * remove karane hai
     * @return void:
     */
    static void RemoveExceptAlphabetForSentence(char[] sentence, char exceptAlphabet) {
        StringBuilder result = new StringBuilder();
        for (char character : sentence) {
            if (character != exceptAlphabet) {
                result.append(character);
            }

        }
        System.out.println("After removing the character from the sentence: " + result);
    }

    public static void main(String[] args) {
        char sentence[] = "Hello, World! 123".toCharArray(); //string ko character array mai convert karane ke liye toCharArray() function ka use kiya hai
        char exceptAlphabet = 'o';
        RemoveExceptAlphabetForSentence(sentence, exceptAlphabet);
    }

}
