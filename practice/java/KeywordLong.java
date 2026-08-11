/**
 * @bref this program we seen about working of keywordlong 
 * @return is int 
 * @implNote we can use both %zu and %lli also 
 * @doute maine yaha %i use kiya integers ke liye to treminal mai ye bata hai UnknownFormatConversionException: Conversion = 'i'
 */
class KeywordLong {
    public static void main(String[] args) {
        
    System.out.printf("the size of integer is :bytes %d\n",+(Integer.BYTES));
    System.out.printf("the size of short is: bytes %d\n ",+(Short.BYTES));
    System.out.printf("the size of double is:bytes %d\n" ,+Double.BYTES);
    System.out.printf("the size of float is: bytes %d\n",+Float.BYTES);
    System.out.printf("the size of character is:bytes %d\n",+Character.BYTES);
    System.out.printf("the size of long is:bytes %d\n ",+Long.BYTES);
    

        return;
    }
}