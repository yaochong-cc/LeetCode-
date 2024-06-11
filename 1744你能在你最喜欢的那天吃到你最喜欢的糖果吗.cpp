////
//// Created by Lenovo on 2024/6/11.
////
//#include <vector>
//#include <iostream>
//using namespace std;
////class Solution {
////public:
////    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
////        vector<bool> ans;
////        vector<long long> preSum(candiesCount.size()+1,0);
////        for(int i=1;i<preSum.size();i++){
////            preSum[i]=preSum[i-1]+(long long)candiesCount[i-1];
////        }
////        for(int i=0;i<queries.size();i++){
////            long long min=(long long)(queries[i][1]+1)*queries[i][2];
////            long long max=preSum[queries[i][0]+1];
////            if((min>preSum[queries[i][0]])&&(queries[i][1]<max)){
////                ans.push_back(true);
////            }else{
////                ans.push_back(false);
////            }
////        }
////        return ans;
////    }
////};
//
//class Solution {
//private:
//    using LL=long long;
//public:
//    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
//        int n=candiesCount.size();
//        //前缀和
//        vector<LL> preSum(n);
//        preSum[0]=candiesCount[0];
//        for(int i=1;i<n;i++){
//            preSum[i]=preSum[i-1]+candiesCount[i];
//        }
//        vector<bool> ans(queries.size());
//        for(auto& q:queries){
//            int favoriteType =q[0];int favoriteDay=q[1];int dailyCap=q[2];
//            if( ((LL)(q[2]*(q[1]+1)) >preSum[q[0]])&&((LL)q[1]<preSum[q[0]+1])){
//                ans.push_back(true);
//            }else{
//                ans.push_back(false);
//            }
//        }
//        return ans;
//    }
//};
//int main() {
//    Solution s;
//    vector<int> candiesCount = {7, 4, 5, 3, 8};
//    vector<vector<int>> queries = {{0, 2}, {4, 2}, {2, 1}, {1, 0}};
//    vector<bool> res = s.canEat(candiesCount, queries);
//    for (auto i : res) {
//        cout<<i<<" ";
//    }
//    return 0;
//}