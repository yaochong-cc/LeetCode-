//
// Created by Lenovo on 2024/5/18.
//
#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;
//class Solution {
//public:
//    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
//        int max_cnt = -1, ans = 0;
//        for (int d : divisors) {
//            int cnt = 0;
//            for(int num : nums){
//
//               if(num%d==0){
//                   cnt++;
//               }
//            }
//            if (cnt > max_cnt || cnt == max_cnt && d < ans) {
//                max_cnt = cnt;
//                ans = d;
//            }
//        }
//        return ans;
//    }
//};

#include <algorithm>  // 引入标准库头文件
// ... 其他代码 ...

//class Solution {
//public:
//    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
//        int max_cnt = -1, ans = 0;
//        for (int d : divisors) {
//            int cnt = std::count_if(nums.begin(), nums.end(), [&](int x) { return x % d == 0; });
//            if (cnt > max_cnt || (cnt == max_cnt && d < ans)) {
//                max_cnt = cnt;
//                ans = d;
//            }
//        }
//        return ans;
//    }
//};


class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int max_cnt = -1, ans = 0;
        sort(nums.begin(),nums.end());
        for (int d : divisors) {
           int cnt=0;
           for(int num:nums){
               if(num<d){
                   break;
               }
               if(num%d==0){
                   cnt++;
               }

           }
            if (cnt > max_cnt || (cnt == max_cnt && d < ans)) {
                max_cnt = cnt;
                ans = d;
            }
        }
        return ans;
    }
};


int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<int> divisors = {2, 3};
    cout << solution.maxDivScore(nums, divisors) << endl;
    return 0;
}