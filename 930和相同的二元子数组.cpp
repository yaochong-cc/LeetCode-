//
// Created by Lenovo on 2024/6/11.
//
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        vector<int> pre(n+1);

        for (int i = 1; i < n + 1; i++) {
            pre[i] = pre[i-1] + nums[i-1];
        }

        int count = 0;
        unordered_map<int, int> seen;

        for (int i = 0; i < n + 1; i++) {
            count += seen[pre[i]];
            seen[pre[i] + goal]++;
        }

        return count;
    }
};
int main() {
    Solution s;
    vector<int> nums={1,0,1,0,1};
    cout<<s.numSubarraysWithSum(nums, 2)<<endl;
    return 0;
}