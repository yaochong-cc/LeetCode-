////
//// Created by Lenovo on 2024/5/19.
////
//#include <iostream>
//#include <vector>
//#include <array>
//using namespace std;
//
//////超时
////class Solution {
////public:
////    long long sumDigitDifferences(vector<int>& nums) {
////        int n=nums.size();
////        int count=0;
////        for(int i=0;i<n;i++){
////            for(int j=i+1;j<n;j++){
////                count+=digitDifference(nums[i],nums[j]);
////            }
////        }
////        return count;
////    }
////    long long digitDifference(int a,int b){
////        vector<int> aArray=arrayOfnum(a);
////        vector<int> bArray=arrayOfnum(b);
////        long long count=0;
////        for(int i=0;i<aArray.size();i++){
////            if(aArray[i]!=bArray[i]){
////                count++;
////            }
////        }
////        return count;
////    }
////    vector<int> arrayOfnum(int num){
////        vector<int> res;
////        while(num){
////            res.push_back(num%10);
////            num/=10;
////        }
////        return res;
////    }
////};
//class Solution {
//public:
//    long long sumDigitDifferences(vector<int>& nums) {
//        long long ans = 0;
//        //数组cnt用于记录每个数字的出现次数。
//        vector<array<int, 10>> cnt(to_string(nums[0]).length());
//        for (int k = 0; k < nums.size(); k++) {
//            int x = nums[k];
//            for (int i = 0; x > 0; x /= 10, i++) {
//                int d = x % 10;
//
//
//                ans += k - cnt[i][d]++; // 前面有这么多个不同于 d 的数
//            }
//        }
//        return ans;
//    }
//};
//
//
//
//int main() {
//    Solution solution;
//    vector<int> nums = {12,23,13};
//    cout << solution.sumDigitDifferences(nums) << endl;
//    return 0;
//}