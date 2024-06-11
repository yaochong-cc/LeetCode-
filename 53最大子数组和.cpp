//
// Created by Lenovo on 2024/6/11.
//
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int preSum=0;
        int minSum=0;
        int ans=INT_MIN;
        for(int num:nums){
            preSum+=num;
            ans=max(ans,preSum-minSum);
            minSum=min(minSum,preSum);
        }
        return ans;
    }
};

int main(){
    vector<int> nums= {-2,1,-3,4,-1,2,1,-5,4};
    Solution sol;
    cout<<sol.maxSubArray(nums)<<endl;
    return 0;
}