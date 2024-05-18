////
//// Created by Lenovo on 2024/5/17.
////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//
//class Solution{
//public:
//    vector<int> twoSum(vector<int>&nums,int target){
//        unordered_map<int,int> hash;
//        for(int i=0;i<nums.size();i++){
//            if(hash.find(target-nums[i])!=hash.end()) {
//                return {hash[target - nums[i]], i};
//            }
//            hash[nums[i]]=i;
//        }
//        return {};
//    }
//};
//
//int main(){
//    vector<int> nums={2,7,11,15};
//    int target=9;
//    Solution sol;
//    vector<int> res=sol.twoSum(nums,target);
//    for(int i=0;i<res.size();i++){
//        cout<<res[i]<<" ";
//    }
//    return 0;
//}