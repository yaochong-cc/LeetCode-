////
//// Created by Lenovo on 2024/5/29.
////
//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//typedef long long ll;
//static constexpr int MOD = 1e9 + 7;
//
//class Solution {
//public:
//    vector<int> productQueries(int n, vector<vector<int>> &queries) {
//
//        vector<int> powers;
//        while (n) {
//            int lowbit = n & (-n);//获取最低有效位
//            powers.push_back(lowbit);
//            n ^= lowbit;//最低有效位清零
//        }
//
//        vector<int> ans;
//        for (auto &q : queries) {
//            int l = q[0], r = q[1];
//            ll mul = 1;
//            for (int i = l; i <= r; i++) {
//                mul *= powers[i];
//                mul %= MOD;
//            }
//            ans.push_back(mul);
//        }
//        return ans;
//    }
//};
//
//
//int main() {
//    Solution s;
//    int n = 15;
//    vector<vector<int>> queries = {{0,1},{2,2},{0,3}};
//    vector<int> res = s.productQueries(n, queries);
//    for (int i = 0; i < res.size(); i++) {
//        cout << res[i] << " ";
//    }
//    return 0;
//}