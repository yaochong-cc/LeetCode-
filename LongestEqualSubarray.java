import java.util.*;

class Solution {
    public int longestEqualSubarray(List<Integer> nums, int k) {
        int n=nums.size();
        Map<Integer,List<Integer>> pos=new HashMap<>();
        for(int i=0;i<n;i++){
            pos.computeIfAbsent(nums.get(i),x->new ArrayList<>()).add(i);
        }
//        pos.computeIfAbsent(key, mappingFunction) 方法会检查 pos 中是否已经有 key 对应的值了，如果没有，会使用 mappingFunction 新建一个值并将其加入到 pos 中。
//      在这段代码中，nums.get(i) 就是作为 key，而 x->new ArrayList<>() 就是 mappingFunction，它负责创建一个新的 ArrayList 并把它加入到 pos 中作为 nums.get(i) 对应的值。
//      最后 add(i) 把当前的位置 i 加入到 nums.get(i) 对应的列表中，表示数字 nums.get(i) 出现在位置 i
        int ans =0;
        for(List<Integer>vec:pos.values()){
            for(int r=0,l=0;r<vec.size();r++){
                while(vec.get(r)-vec.get(l)-(r-l)>k){
                    l++;
                }
                ans=Math.max(ans,r-l+1);
            }
        }
        return ans;
    }
}
public class LongestEqualSubarray {
    public static void main(String[] args) {
        List<Integer> nums = new ArrayList<>();
        nums= Arrays.asList(1,3,2,3,1,3);
        int k = 3;
       Solution le = new Solution();
        int ans = le.longestEqualSubarray(nums, k);
        System.out.println(ans);
    }
}
