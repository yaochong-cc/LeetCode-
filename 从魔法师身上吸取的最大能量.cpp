//
// Created by Lenovo on 2024/5/12.
//
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//// 暴力法---超时
//class Solution {
//public:
//    int maximumEnergy(vector<int>& energy, int k) {
//       vector<int> res;
//        for(int i=0;i<energy.size();i++){
//            int ans=0;
//            for(int j=i;j<energy.size();j+=k){
//                ans+=energy[j];
//            }
//            res.push_back(ans);
//        }
//        int maxValue=INT_MIN;
//        for(int i=0;i<res.size();i++){
//            maxValue=max(maxValue,res[i]);
//        }
//        return maxValue;
//    }
//};


//优化空间，仍超时
//class Solution {
//public:
//    int maximumEnergy(vector<int>& energy, int k) {
//        int maxValue = INT_MIN;
//        int n = energy.size();
//        for (int i = 0; i < n; i++) {
//            int sum = 0;
//            for (int j = i; j < n; j += k) {
//                sum += energy[j];
//            }
//            maxValue = max(maxValue, sum);
//        }
//        return maxValue;
//    }
//};


//可以通过的做法：
class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int ans = INT_MIN;
        for (int i = 0; i < k; i++) {
            int s = 0;
            for (int j = i + (energy.size() - i - 1) / k * k; j >= 0; j -= k) {
                s += energy[j];
                ans = max(ans, s);
            }
        }
        return ans;
    }
};


//class Solution {
//public:
//    int maximumEnergy(vector<int>& energy, int k) {
//        int n = energy.size();
//        int f[n];
//        for (int i = n - 1; i >= 0; i--) {
//            f[i] = energy[i];
//            if (i + k < n) f[i] += f[i + k];
//        }
//        int ans = INT_MIN;
//        for (int i = 0; i < n; i++) ans = max(ans, f[i]);
//        return ans;
//    }
//};



int main() {
    vector<int> energy = { 5,2,-10,-5,1 };
    int k = 3;
    Solution sol;
    int res = sol.maximumEnergy(energy, k);
    cout << res << endl;
    return 0;
}