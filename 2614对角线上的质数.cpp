////
//// Created by Lenovo on 2024/5/22.
////
//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//class Solution {
//    bool isPrime(int num) {
//        for(int i=2;i*i<=num;i++){
//            if(num%i==0){
//                return false;
//            }
//        }
//        return num>=2;
//    }
//public:
//    int maxValue1=0;
//    int maxValue2=0;
//    int diagonalPrime(vector<vector<int>>& nums) {
//        for(int i=0;i<nums.size();i++){
//            if(isPrime(nums[i][i])){
//                maxValue1= max(maxValue1,nums[i][i]);
//            }
//            if(isPrime(nums[i][nums.size()-i-1])){
//                maxValue2 =max(maxValue2,nums[i][nums.size()-1-i]);
//            }
//        }
//        return max(maxValue2,maxValue1 );
//    }
//};
//
//
//////艾神的答案
////class Solution {
////    bool is_prime(int n) {
////        for (int i = 2; i * i <= n; ++i)
////            if (n % i == 0)
////                return false;
////        return n >= 2; // 1 不是质数
////    }
////
////public:
////    int diagonalPrime(vector<vector<int>> &nums) {
////        int n = nums.size(), ans = 0;
////        for (int i = 0; i < n; ++i) {
////            if (int x = nums[i][i]; x > ans && is_prime(x))
////                ans = x;
////            if (int x = nums[i][n - 1 - i]; x > ans && is_prime(x))
////                ans = x;
////        }
////        return ans;
////    }
////};
////
//
//int main(){
//    Solution s;
//    vector<vector<int>> nums={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
//    cout<<s.diagonalPrime(nums)<<endl;
//    return 0;
//}