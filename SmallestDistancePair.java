import java.util.Arrays;

public class SmallestDistancePair {
    public static void main(String[] args) {
        int[] nums = {1, 3, 1};
        int k = 3;
        System.out.println(new Solution().smallestDistancePair(nums, k));
    }

}
//class Solution {
//    public int smallestDistancePair(int[] nums, int k) {
//        Arrays.sort(nums);
//        int n=nums.length;
//
//        int ans=0;
//        int m,cnt;
//        for( int l=0, r=nums[n-1]-nums[0];l<=r;){
//            m=l+(r-l)>>1;
//            cnt=f(nums,m);
//            if(cnt>=k){
//                ans=m;
//                r=m-1;
//            }else{
//                l=m+1;
//            }
//        }
//        return ans;
//    }
//
//    //范围内的对数
//    public static int f(int[]nums,int limit){
//        int ans=0;
//        for(int l=0,r=0;l<nums.length;l++){
//            while(r+1<nums.length&& nums[r+1]-nums[r]<=limit){
//                r++;
//            }
//            ans+=r-l;
//        }
//        return ans;
//    }
//}

class Solution {
    public int smallestDistancePair(int[] nums, int k) {
        Arrays.sort(nums);
        int n = nums.length, left = 0, right = nums[n - 1] - nums[0];
        while (left <= right) {
            int mid = (left + right) / 2;
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                int i = binarySearch(nums, j, nums[j] - mid);
                cnt += j - i;
            }
            if (cnt >= k) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }

    public int binarySearch(int[] nums, int end, int target) {
        int left = 0, right = end;
        while (left < right) {
            int mid = (left + right) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }
}

