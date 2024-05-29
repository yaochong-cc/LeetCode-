import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class MaximumLength {
}
class Solution {
    public int maximumLength(String s) {

        char[] arr =s.toCharArray();
        List<Integer>[] groups=new ArrayList [26];
        Arrays.setAll(groups,i->new ArrayList<>[]);
        int cnt=0;
        for(int i=0;i<arr.length;i++){
            cnt++;
            if(i+1==arr.length||arr[i]!=arr[i+1]){
                groups[arr[i]-'a'].add(cnt);
                cnt=0;
            }
        }
        int ans=0;
        for(List<Integer> a:groups){
            if(a.isEmpty()) continue;
            a.sort(Collections.reverseOrder());
            a.add(0);
            a.add(0);
            ans = Math.max(ans, Math.max(a.get(0) - 2, Math.max(Math.min(a.get(0) - 1, a.get(1)), a.get(2))));
        }
        return ans>0?ans:-1;
    }
}