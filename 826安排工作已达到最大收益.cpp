////
//// Created by Lenovo on 2024/5/17.
////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
//        int n = difficulty.size();
//        vector<pair<int, int>> jobs(n);
//        for (int i = 0; i < n; i++) {
//            jobs[i] = {difficulty[i], profit[i]};
//        }
//        sort(jobs.begin(), jobs.end());
//        sort(worker.begin(),worker.end());
//        int i=0;int j=0;int ans=0;
//        for(int i=0;i<worker.size();i++){
//            while(j<n&&jobs[j].first<=worker[i]){
//                j++;
//                if(jobs[j].first==worker[i]){
//                    ans+=jobs[j].second;
//                }
//            }
//        }
//        return ans ;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> difficulty = {2, 4, 6, 8, 10};
//    vector<int> profit = {10, 20, 30, 40, 50};
//    vector<int> worker = {4, 5, 6, 7};
//    cout << s.maxProfitAssignment(difficulty, profit, worker) << endl;
//    return 0;
//}