//
// Created by Lenovo on 2024/5/29.
//
#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int maximumLength(string s) {
        vector<int> groups[26];
        int cnt = 0, n = s.length();
        for (int i = 0; i < n; i++) {
            cnt++;
            if (i + 1 == n || s[i] != s[i + 1]) {
                groups[s[i] - 'a'].push_back(cnt); // 统计连续字符长度
                cnt = 0;
            }
        }

        int ans = 0;
        for (auto& a: groups) {
            if (a.empty()) continue;
            sort(a.begin(),a.end());//降序排列；
            reverse(a.begin(), a.end());
            a.push_back(0);
            a.push_back(0); // 假设还有两个空串
            ans = max({ans, a[0] - 2, min(a[0] - 1, a[1]), a[2]});
        }

        return ans ? ans : -1;
    }
};

int main() {
    Solution s;
    string str = "abcabcbb";
    cout << s.maximumLength(str) << endl;
    return 0;
}