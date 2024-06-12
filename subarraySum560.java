import java.util.HashMap;
import java.util.Map;

public class subarraySum560 {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] nums = {1, 1, 1};
        int k = 2;
        int res = sol.subarraySum(nums, k);
        System.out.println(res);
    }
}
class Solution {
    public int subarraySum(int[] nums, int k) {
        int n = nums.length;
        int[] s = new int[n + 1];
        for (int i = 0; i < n; i++) {
            s[i + 1] = s[i] + nums[i];
        }//前缀和

        int ans = 0;
        Map<Integer, Integer> cnt = new HashMap<>(n + 1); // 设置容量可以快 2ms
        for (int sj : s) {
            ans += cnt.getOrDefault(sj - k, 0);
//        default V getOrDefault(Object key, V defaultValue) {
//        V v;
//        return (((v = get(key)) != null) || containsKey(key)) ? v : defaultValue;
//
//    }


           cnt.put(sj, cnt.getOrDefault(sj, 0) + 1);
           //或者：
           // cnt.merge(sj, 1, Integer::sum);
            
//            merge方法用于将指定的key和value合并到Map中。
//            如果给定的key已经存在，则会根据提供的函数对现有值进行变换，
//            如果key不存在，则直接将key和value加入到Map中。

// 源码：
//         default V merge(K key, V value,
//            BiFunction<? super V, ? super V, ? extends V> remappingFunction) {
//        Objects.requireNonNull(remappingFunction);
//        Objects.requireNonNull(value);
//        V oldValue = get(key);
//        V newValue = (oldValue == null) ? value :
//                   remappingFunction.apply(oldValue, value);
//        if (newValue == null) {
//            remove(key);
//        } else {
//            put(key, newValue);
//        }
//        return newValue;
//    }
        }
        return ans;
    }
}

