public class PalindromeString {
    public static void main(String[] args) {
        String str;
        str = "A man, d plan, a canal, Panama";
        boolean isItPalindrome = callingPalindromeStringCheck(str);

       System.out.println("is it palindrome : "+isItPalindrome);
    }

    public static boolean callingPalindromeStringCheck(String str){
        str = str.replaceAll("[^a-zA-z0-9]", "").toLowerCase();
        int i = 0, j= str.length()-1;
        while (i<j) {
            if (str.charAt(i)!=str.charAt(j)) {
                return false;
            }
            i++;
            j--;
        }
        return true; 
    }
}
