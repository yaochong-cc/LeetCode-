//二分答案法

//估计 最终答案可能的范围 是什么
//分析 问题与答案 和 给定条件 之间的 单调性 ，大部分时间只需要用到自然智慧
//建立一个f 函数，当答案固定的情况下， 判断 给定的条件是否达标
//在最终答案可能的范围上不断二分搜索，每次用f函数判断，直到二分结束，找到最合适的答案
public class BinaryAnswerMethod {
    public static void main(String[] args) {
//        // 爱吃香蕉的珂珂
//        Solution sol = new Solution();
//        int[] piles = {3, 6, 7, 11};
//        int h = 8;
//        int ans = sol.minEatingSpeed(piles, h);
//        System.out.println(ans);
        //分割数组的最大值
        Solution sol = new Solution();
        int[] nums = {7, 2, 5, 10, 8};
        int k = 3;
        int ans = sol.splitArray(nums, k);
        System.out.println(ans);
    }


}

////LeetCode 875爱吃香蕉的珂珂
//class Solution {
//    public int minEatingSpeed(int[] piles, int h) {
//        int l=1;
//        int r=0;
//        for(int pile:piles){
//            r=Math.max(r,pile);
//        }
//        int ans=0;
//        int m=0;
//        while(l<=r){
//            m=(l+r)/2;
//            if(f(piles,m)<=h){
//                ans=m;
//                r=m-1;
//            }else{
//                l=m+1;
//            }
//        }
//        return ans;
//    }
//    public static long f(int []piles,int speed){
//        long ans=0;
//        for(int pile:piles){
//            ans+=(pile+speed-1)/speed;
//        }
//        return ans;
//    }
//
//}

//Leetcode 410分割数组的最大值
class Solution {
    public int splitArray(int[] nums, int k) {
        long sum=0;
        for(int num:nums){
            sum+=num;
        }
        long ans=0;
        for(long l=0,r=sum,m,cur;l<=r;){
            m=l+((r-l)>>1);
            cur=f(nums,m);
            if(cur<=k){
                ans=m;
                r=m-1;
            }else{
                l=m+1;
            }
        }
        return (int)ans;
    }
    public static int f(int[]arr,long aim){
        int parts=1;
        int all=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]>aim){
                return Integer.MAX_VALUE;
            }
            if(all+arr[i]>aim){
                parts++;
                all=arr[i];
            }else{
                all+=arr[i];
            }
        }
        return parts;
    }

}