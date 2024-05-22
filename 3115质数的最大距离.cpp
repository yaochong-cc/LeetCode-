////
//// Created by Lenovo on 2024/5/22.
////
//#include <iostream>
//#include <vector>
//using namespace std;
//
////暴力解法
////class Solution {
////    bool isPrime(int num){
////        for(int i=2;i*i<=num;i++){
////            if(num%i==0){
////                return false;
////            }
////        }
////        return num>=2;
////    }
////public:
////
////    int maximumPrimeDifference(vector<int>& nums) {
////        int i=0;
////        while(!isPrime(nums[i])){
////            i++;
////        }
////        int j=nums.size()-1;
////        while(!isPrime(nums[j])){
////            j--;
////        }
////        return j-i;
////    }
////};
//
//
////预处理
//const int MX = 101;
//bool not_prime[MX];
//
//auto init = [] {
//    not_prime[1] = true;
//    for (int i = 2; i * i < MX; i++) {
//        if (not_prime[i]) continue;
//        for (int j = i * i; j < MX; j += i) {
//            not_prime[j] = true; // j 是质数 i 的倍数
//        }
//    }
//    return 0;
//}();
//
//class Solution {
//public:
//    int maximumPrimeDifference(vector<int>& nums) {
//        int i = 0;
//        while (not_prime[nums[i]]) {
//            i++;
//        }
//        int j = nums.size() - 1;
//        while (not_prime[nums[j]]) {
//            j--;
//        }
//        return j - i;
//    }
//};
//
//
//
//int main() {
//    Solution s;
//    vector<int> nums = {4,2,9,5,3};
//    cout << s.maximumPrimeDifference(nums) << endl;
//    return 0;
//}