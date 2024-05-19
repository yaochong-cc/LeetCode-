////
//// Created by Lenovo on 2024/5/19.
////
//#include <iostream>
//#include <vector>
//using namespace std;
//
////超时
////class Solution {
////public:
////    vector<bool> isArraySpecial(vector<int> &nums, vector<vector<int>> &queries) {
////        int n = queries.size();
////        // vector<vector<int>> vec(n,vector<int>(nums.size(),0));
////        vector<bool> res;
////
////        for (int i = 0; i < n; i++) {
////            vector<int> vec;
////            for (int j = queries[i][0]; j <= queries[i][1]; j++) {
////                vec.push_back(nums[j]);
////            }
////            res.push_back(isSingleArraySpecial(vec));
////        }
////        return res;
////    }
////
////    bool isSingleArraySpecial(vector<int> &nums) {
////        int n = nums.size();
////        if (n == 1) {
////            return true;
////        }
////        int slow;
////        int fast = slow + 1;
////        for (slow = 0; slow < n - 1; slow++) {
////            if ((nums[slow] + nums[fast]) % 2 == 0) {
////                return false;
////            }
////        }
////        return true;
////    }
////};
//
////前缀和
//class Solution {
//public:
//    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
//        vector<int> s(nums.size());
//        for (int i = 1; i < nums.size(); i++) {
//            s[i] = s[i - 1] + ((nums[i] ^ nums[i - 1] ^ 1) & 1);
//        }
//        vector<bool> ans(queries.size());
//        for (int i = 0; i < queries.size(); i++) {
//            auto& q = queries[i];
//            ans[i] = s[q[0]] == s[q[1]];
//        }
//        return ans;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> nums = {1, 2, 3, 4, 5};
//    vector<vector<int>> queries = {{0, 4}, {1, 3}, {2, 2}, {3, 1}};
//    auto res = s.isArraySpecial(nums, queries);
//    for (auto& r : res) {
//        cout << r << " ";
//    }
//    cout << endl;
//    return 0;
//}
