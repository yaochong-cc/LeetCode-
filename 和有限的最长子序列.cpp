//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> answerQueries(vector<int> &nums, vector<int> &queries) {
//        sort(nums.begin(), nums.end());
//        for (int i = 1; i < nums.size(); ++i)
//            nums[i] += nums[i - 1]; // 原地求前缀和
//        for (int &q : queries) // 复用 queries 作为答案
//
////            upper_bound 函数用于在已排序的范围内查找首个大于指定值的元素。
//            q = upper_bound(nums.begin(), nums.end(), q) - nums.begin();
//        return queries;
//    }
//};
//
//int main(){
//    Solution s;
//    vector<int> nums = {4,5,2,1};
//    vector<int> queries = {3,10,21};
//    vector<int> res = s.answerQueries(nums, queries);
//    for(int i=0;i<res.size();i++){
//        cout<<res[i]<<" ";
//    }
//    return 0;
//}