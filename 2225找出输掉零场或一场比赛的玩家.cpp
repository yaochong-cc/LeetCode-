//
// Created by Lenovo on 2024/5/22.
//
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> loss_count;
        for (auto& m : matches) {
            if (!loss_count.count(m[0])) {
//                count是一个用于检查元素出现次数的函数。
//                count用于检查一个容器中是否存在以winner作为键的条目。
//                如果存在，count函数会返回1；如果不存在，返回0。
                loss_count[m[0]] = 0;
            }
            loss_count[m[1]]++;
        }
        vector<vector<int>> ans(2);
        for (auto& [player, cnt] : loss_count) {
            if (cnt < 2) {
                ans[cnt].push_back(player);
            }
        }
        sort(ans[0].begin(), ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        return ans;
    }
};



int main() {
    Solution s;
    vector<vector<int>> matches = {{1, 3},
                                   {2, 3},
                                   {4, 2},
                                   {5, 1},
                                   {6, 1},
                                   {7, 2},
                                   {8, 3}};
    vector<vector<int>> res = s.findWinners(matches);
    for (auto i: res) {
        for (auto j: i) {
            cout << j << " ";
        }
    }

    return 0;
}