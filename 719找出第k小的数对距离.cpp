#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//暴力法，超时
//class Solution {
//public:
//    int smallestDistancePair(vector<int>& nums, int k) {
//        int n=nums.size();
//        vector<int> res;
//        for(int i=0;i<n;i++){
//            for(int j=i+1;j<n;j++){
//                res.push_back(nums[i]>nums[j]?nums[i]-nums[j]:nums[j]-nums[i]);
//            }
//        }
//        sort(res.begin(),res.end());
//        return res[k-1];
//    }
//};

//二分答案法
class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), left = 0, right = nums.back() - nums.front();
        while (left <= right) {
            int mid = (left + right) / 2;
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                int i = lower_bound(nums.begin(), nums.begin() + j, nums[j] - mid) - nums.begin();
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
};


int main(){
    vector<int> nums={1,3,1};
    int k=3;
    Solution sol;
    cout<<sol.smallestDistancePair(nums,k)<<endl;
    return 0;
}