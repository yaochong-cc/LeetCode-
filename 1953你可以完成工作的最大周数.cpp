//
// Created by Lenovo on 2024/5/16.
//
//#include <algorithm> // 包含<algorithm>头文件
//#include <vector>
//#include <iostream>
//#include <numeric> // 包含<numeric>头文件
//
//class Solution {
//public:
//    long long numberOfWeeks(std::vector<int>& milestones) {
//        long long s = std::accumulate(milestones.begin(), milestones.end(), 0LL); // 使用std::accumulate
//        long long m = *std::max_element(milestones.begin(), milestones.end()); // 使用std::max_element
//        return m > s - m + 1 ? (s - m) * 2 + 1 : s;
//    }
//};
//
//int main() {
//    Solution s;
//    std::vector<int> milestones = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    std::cout << s.numberOfWeeks(milestones) << std::endl;
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <ranges>
//using namespace std;
//
//class Solution {
//public:
//    long long numberOfWeeks(vector<int>& milestones) {
//        long long s = reduce(milestones.begin(), milestones.end(), 0LL);
//        long long m = ranges::max(milestones);
//        return m > s - m + 1 ? (s - m) * 2 + 1 : s;
//    }
//};
//
//
//int main() {
//    Solution s;
//    vector<int> milestones = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    cout << s.numberOfWeeks(milestones) << endl;
//    return 0;
//}