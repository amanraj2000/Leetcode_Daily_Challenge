class Solution {
    private int getDigitSum(int val) {
       int sum = 0;
       while (val != 0) {
           sum += val % 10;
           val /= 10;
       }
       return sum;
   }

   public int maximumSum(int[] nums) {
       Map<Integer, Integer> sumMaxVal = new HashMap<>();
       int maxSum = -1;

       for (int ele : nums) {
           int digitSum = getDigitSum(ele);
           if (sumMaxVal.containsKey(digitSum)) {
               maxSum = Math.max(maxSum, ele + sumMaxVal.get(digitSum));
               if (sumMaxVal.get(digitSum) < ele) {
                   sumMaxVal.put(digitSum, ele);
               }
           } else {
               sumMaxVal.put(digitSum, ele);
           }
       }

       return maxSum;
   }
}