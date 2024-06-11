//public class maxSubArrays53 {
//
//    public static void main(String[] args) {
//        Solution sol=new Solution();
//        int[] nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//        int ans =sol.maxSubArray(nums);
//        System.out.println(ans);
//    }
//}
////class Solution {
////    public int maxSubArray(int[] nums) {
////        int ans = Integer.MIN_VALUE;
////        int minPreSum = 0;
////        int preSum = 0;
////        for (int x : nums) {
////            preSum += x; // 当前的前缀和
////            ans = Math.max(ans, preSum - minPreSum); // 减去前缀和的最小值
////            minPreSum = Math.min(minPreSum, preSum); // 维护前缀和的最小值
////        }
////        return ans;
////    }
////}
//
//
//class Solution {
//    public int maxSubArray(int[] nums) {
//        int ans = nums[0];
//        int sum = 0;
//        for(int num: nums) {
//            if(sum > 0) {
//                sum += num;
//            } else {
//                sum = num;
//            }
//            ans = Math.max(ans, sum);
//        }
//        return ans;
//    }
//}