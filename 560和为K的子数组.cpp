//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//class Solution {
//public:
//    int subarraySum(vector<int>& nums, int k) {
//        int n = nums.size();
//        vector<int> s(n + 1);
//        for (int i = 0; i < n; i++) {
//            s[i + 1] = s[i] + nums[i];
//        }
//        int ans = 0;
//        unordered_map<int, int> cnt;
//        for (int sj : s) {
//            // 注意不要直接 += cnt[sj-k]，如果 sj-k 不存在，会插入 sj-k
//            ans += cnt.contains(sj - k) ? cnt[sj - k] : 0;
//            cnt[sj]++;
//        }
//        return ans;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> nums = {1, 1, 1};
//    int k = 2;
//    cout << s.subarraySum(nums, k) << endl;
//    return 0;
//}
