//
// Created by Lenovo on 2024/5/22.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
////我自己丑陋的解法
//class Solution {
//    bool isPrime(int n) {
//        int count=0;
//        while(n){
//            if(n%2==1){
//                count++;
//            }
//            n/=2;
//        }
//      for(int i=2;i*i<=count;i++){
//          if(count%i==0){
//              return false;
//          }
//      }
//      return count>=2;
//    }
//public:
//    int countPrimeSetBits(int left, int right) {
//        int ans=0;
//        for(int i=left;i<=right;i++){
//            if(isPrime(i)){
//                ans++;
//            }
//        }
//        return ans;
//    }
//};


//官方解法
class Solution {
    bool isPrime(int x) {
        if (x < 2) {
            return false;
        }
        for (int i = 2; i * i <= x; ++i) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }

public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int x = left; x <= right; ++x) {
            if (isPrime(__builtin_popcount(x))) {//__builtin_popcount 函数用于返回一个整数中被置为1的位的个数
                ++ans;
            }
        }
        return ans;
    }
};


int main(){
    Solution s;
    cout<<s.countPrimeSetBits(6,10)<<endl;
    return 0;
}