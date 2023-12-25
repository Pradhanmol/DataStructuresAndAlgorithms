public class ReturTargetIndexNo {
    public static void main(String[] args) {
        int[] arr = {1, 3, 5, 6};
        int targetNo = 5;
        int resIndex = callingReturnIdxOfTargetNo(arr,targetNo);
        System.out.println(resIndex);
    }
    public static int callingReturnIdxOfTargetNo(int[] arr, int targetNo){
        for (int i = 0; i < arr.length; i++) {
            if (arr[i]==targetNo) {
                return i;
            }
        }
        return 1; 
    }

}
