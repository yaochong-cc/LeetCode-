//import java.util.HashMap;
//import java.util.Map;
//class Solution {
//    public int[] twoSum(int[] nums, int target) {
//        Map<Integer,Integer> map =new HashMap<>();
//        for(int i=0;i<nums.length;i++){
//            if(map.containsKey(target-nums[i])){//这行代码是在给定的Map中检查是否存在特定的键
//                return new int[]{map.get(target-nums[i]),i};//map.get(target-nums[i]) 用于从Map中获取特定键对应的值,也就是返回下标
//            }
//            map.put(nums[i],i);
//
//        }
//        throw new IllegalArgumentException("No two sum solution");
//    }
//}
//
//public class TwoSum {
//    Solution sol = new Solution();
//    public static void main(String[] args) {
//        int[] nums = {2,7,11,15};
//        int target = 9;
//        int[] result = new TwoSum().sol.twoSum(nums, target);
//        System.out.println(result[0] + " " + result[1]);
//    }
//}
//
