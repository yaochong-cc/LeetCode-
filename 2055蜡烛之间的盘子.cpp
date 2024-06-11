////
//// Created by Lenovo on 2024/6/7.
////
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//class Solution {
//public:
//    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
//        int n = s.length();
//        vector<int> preSum(n);//“*”的前缀和
//        for (int i = 0, sum = 0; i < n; i++) {
//            if (s[i] == '*') {
//                sum++;
//            }
//            preSum[i] = sum;
//        }
//        vector<int> left(n);//从左向右
//        for (int i = 0, l = -1; i < n; i++) {
//            if (s[i] == '|') {
//                l = i;
//            }
//            left[i] = l;
//        }
//        vector<int> right(n);//从右向左
//        for (int i = n - 1, r = -1; i >= 0; i--) {
//            if (s[i] == '|') {
//                r = i;
//            }
//            right[i] = r;
//        }
//        vector<int> ans;
//        for (auto& query : queries) {
//            int x = right[query[0]], y = left[query[1]];
//            //y-x :两个盘子或蜡烛之间‘|’索引的差值
//            ans.push_back((x == -1 || y == -1 || x >= y )? 0 : preSum[y] - preSum[x]);
//        }
//        return ans;
//    }
//};
//
//
//int main(){
//    Solution sol;
//    string s = "**|**|*|";
//    vector<vector<int>> queries = {{2,5},{5,9}};
//    vector<int> ans = sol.platesBetweenCandles(s,queries);
//    for(auto i:ans){
//        cout<<i<<" ";
//    }
//    return 0;
//}