public class ReArrangeOddEven {
    public static void main(String[] args) {
        int[] arr = {3, 1, 2, 4, 6, 5, 7, 8};   
        int[] resArr = callingRearrangeArr(arr);
        for (int i : resArr) {
            System.out.println(i);
        }
    }
    public static int[] callingRearrangeArr(int[] arr){
        int[] resArr = new int[arr.length];
        int evenIndex = 0 , oddIndex = arr.length/2;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i]%2==0) {
                resArr[evenIndex] = arr[i];
                evenIndex++;
            }else{
                resArr[oddIndex] = arr[i];
                oddIndex++;
            }
        }
        return resArr;
    }
}
