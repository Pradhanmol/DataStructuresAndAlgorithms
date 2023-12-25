public class FirstNonRepeatingCharFromStart {
    public static void main(String[] args) {
        String str = "AAnnnmmmqlleetcode";
        char resStr = firstNonRepeatingChar(str);
        System.out.println(resStr);
    }
    public static char firstNonRepeatingChar(String str){
        //int count = 0;
        str = str.toLowerCase();
        //char firstNonRepeatingCharVar = 'a';
        for (int i = 0; i < str.length(); i++) {
            boolean isRepeated = false;
            for (int j = 0; j < str.length(); j++) {
                if (i!=j&&str.charAt(i)==str.charAt(j)) {
                    isRepeated = true;
                    break;
                }

            }
            if (!isRepeated) {
                return str.charAt(i);
            }
        }
        return ' ';
    }
}
