
//LeetCode 162.Find Peak Element

//A peak element is an element that is strictly greater than its neighbors.
//
//Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.
//
//You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

public class FindPeakElement {
    class Solution{
        public static int findPeakElement(int []arr){
            int n=arr.length;
            if(arr.length==1){
                return 0;
            }
            if(arr[0]>arr[1]){
                return 0;
            }
            if(arr[n-1]>arr[n-2]){
                return n-1;
            }
            int l=1,r=n-2,m=0,ans=-1;
            while(l<=r){
                m=(l+r)/2;
                if(arr[m-1]>arr[m]){//向左二分
                    r=m-1;
                }else if(arr[m]<arr[m+1]){//向右二分
                    l=m+1;
                }else {
                    ans=m;
                    break;
                }
            }
            return ans ;
        }
    }
}
