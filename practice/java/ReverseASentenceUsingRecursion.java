class ReverseASentenceUsingRecursion{

    public static String reverse_a_sentence(String sentence){
        if(sentence == null){
            return null;
        }
        char[] characters = sentence.toCharArray();
        int start = 0;
        int end = characters.length - 1;
        while(start < end){
            char temp = characters[start];
            characters[start] = characters[end];
            characters[end] = temp;
            start++;
            end--;
        }
        return new String(characters);      
    }

    public static void main(String[] args){
        String sentence = "Hello World";
        String reversedSentence = reverse_a_sentence(sentence);
        System.out.println(reversedSentence);
    }
}