//
// Created by Lenovo on 2024/5/23.
//
#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,vector<int>> pos;
        for(int i=0;i<n;i++){
            pos[nums[i]].emplace_back(i);
        }
        int ans=0;
        for(auto&[_,vec]:pos){
            for(int right=0,left=0;right<vec.size();right++){
                while(vec[right]-vec[left]-(right-left)>k){
                //此时子数组的长度为vec[right]-vec[left]+1，大于k，需要缩小左边界
                //等值子数组的长度为rigth-left+1，
                //即需要删除的元素个数为(vec[right]-vec[left]+1)-(right-left+1)=vec[right]-vec[left]-(right-left)
                //vec[right]-vec[left]-(right-left)<k时符合条件
                    left++;
                }
                ans=max(ans,right-left+1);
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums={1,2,3,4,5,6,7,8,9,10};
    int k=3;
    cout<<s.longestEqualSubarray(nums,k)<<endl;
    return 0;
}

