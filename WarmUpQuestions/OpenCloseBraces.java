import java.util.Stack;

public class OpenCloseBraces {
    public static void main(String[] args) {
        String str = "()";
        boolean checkBraces = callingCloseBracesCheck(str);
        System.out.println(checkBraces);
    }
    public static Boolean callingCloseBracesCheck(String str2){
        Stack<Character> st = new Stack<>();
        for (int i = 0; i < str2.length(); i++) {
            char ch = str2.charAt(i);
            if (ch =='('||ch=='{'||ch=='[') {
                st.push(ch);    
            }else if(ch ==')'){
                boolean val = handlingBraces(st, '(');
                if (val==false) {
                    return val;
                }
            }else if(ch =='}'){
                boolean val = handlingBraces(st, '{');
                if (val==false) {
                    return val;
                }
            }else if(ch ==']'){
                boolean val = handlingBraces(st, '[');
                if (val==false) {
                    return val;
                }
            }else{
                
                }
        }
            if(st.size()==0){
           return true;
        }else{
            return false; // extra open braces --> handle by after completion if stack is not empty then it return false
        }
        
    }
    public static Boolean handlingBraces(Stack<Character> st, char ch){
        if (st.size()==0) { // for extra open braces 
            return false;
        }else if(st.peek()!=ch) {
            return false;
        }else{
            st.pop();
            return true;
        }
    }
}
