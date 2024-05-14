import java.util.HashMap;
import java.util.Map;

public class MinimumRounds {
    public static void main(String[] args) {
        Solution s =new Solution();
        int []tasks={2,2,3,3,2,4,4,4,4,4};
        System.out.println(s.minimumRounds(tasks));

    }
}
//2244. 完成所有任务需要的最少轮数
class Solution {
    public int minimumRounds(int[] tasks) {
        Map<Integer,Integer> cnt =new HashMap<>();
        for(int t:tasks){
            cnt.merge(t,1,Integer::sum);
        }
        int ans=0;
        for(int c:cnt.values()){
            if(c==1){
                return -1;
            }
            ans+=(c+2)/3;
        }
        return ans;
    }
}