import java.util.HashMap;
import java.util.Map;

public class numSubarrayWithSum930 {
    public static void main(String[] args) {
        int[] nums = {1, 1, 2, 2, 3};
        int t = 3;
        System.out.println(new Solution().numSubarraysWithSum(nums, t));
    }
}

class Solution {
    public int numSubarraysWithSum(int[] nums, int t) {
        int n = nums.length;
        int[] sum = new int[n + 1];
        for (int i = 1; i <= n; i++) sum[i] = sum[i - 1] + nums[i - 1];
        Map<Integer, Integer> map = new HashMap<>();
        map.put(0, 1);//键位0，值为1
        //初始化哈希映射，记录和为0的子数组的数量。
        int ans = 0;
        for (int i = 0; i < n; i++) {
            //r-l=t-->l=r-t
            //ans+=map[l]
            //map[r]++
            int r = sum[i + 1], l = r - t;
            ans += map.getOrDefault(l, 0);//它接受一个键作为输入，如果该键存在于映射中，则返回相应的值。
                                                    // 如果该键不存在，则返回指定的默认值（在这里是0）。
            map.put(r, map.getOrDefault(r, 0) + 1);// r 在哈希映射中的值加一，并将结果保存回哈希映射 map 中的键 r 对应的位置。
        }
        return ans;
    }
}
