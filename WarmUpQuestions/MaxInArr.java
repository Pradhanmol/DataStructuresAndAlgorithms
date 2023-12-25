/**
 * MaxInArr
 */
public class MaxInArr {

    public static void main(String[] args) {
        int target =8;
        int arr[] = {9,18,7,5,3};
        //findMaxInArr(arr);
        findSumOfIndicesOfTargetNo(arr,target);
    }

    private static void findSumOfIndicesOfTargetNo(int[] arr, int target) {
        int i = 0;
        while (i<arr.length-1) {
        int j = i+1;
            while(j<arr.length){
            if (arr[i]+arr[j]==target) {
                System.out.println("The indexes of target no. are: " + i + "," + j);
                return; // Assuming we only need to find one valid pair
            }
            j++;
        }
         i++;
    }
    System.out.println("not found");
       
}

    private static void findMaxInArr(int[] arr) {
        int i = 0;
        int max = 0;
        while (arr[i]>max&&i<arr.length) {
            max = arr[i];
            i++;
        }
        System.out.println(max);
    }
    
}