//
// Created by Lenovo on 2024/5/7.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//class Solution {
//public:
//    int cherryPickup(vector<vector<int>>& grid) {
//        int m =grid.size();int n=grid[0].size();
//        vector<vector<vector<int>>> memo (m,vector<vector<int>> (n,vector<int> (n,-1)));
//        function<int(int,int,int)>dfs =[&] (int i,int j,int k) ->int{
//
//        };
//    }
//};
//----------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <functional>//function
using namespace std;

//class Solution {
//public:
//    int cherryPickup(vector<vector<int>>& grid) {
//        int m = grid.size(), n = grid[0].size();
//        vector<vector<vector<int>>> memo(m, vector<vector<int>>(n, vector<int>(n, -1))); // -1 表示没有计算过
//        function<int(int, int, int)> dfs = [&](int i, int j, int k) -> int {//lambda表达式
//            if (i == m || j < 0 || j >= n || k < 0 || k >= n) {
//                return 0;
//            }
//            int& res = memo[i][j][k]; // 注意这里是引用
//            if (res != -1) { // 之前计算过
//                return res;
//            }
//            for (int j2 = max(0, j - 1); j2 <= min(n-1, j + 1); j2++) {
//                for (int k2 = max(0, k - 1); k2 <= min(n-1, k + 1); k2++) {
//                    res = max(res, dfs(i + 1, j2, k2));
//                }
//            }
//            res += grid[i][j] + (k != j ? grid[i][k] : 0);
//            return res;
//        };
//        return dfs(0, 0, n - 1);
//    }
//};


class Solution {
public:
    // 定义一个 Solution 类来解决问题
    int cherryPickup(vector<vector<int>>& grid) {
        // 声明函数 cherryPickup，传入一个二维 vector<int> 类型的 grid，返回一个整数
        int m = grid.size(), n = grid[0].size();
        // 获取网格的行数 m 和列数 n
        vector<vector<vector<int>>> f(m + 1, vector<vector<int>>(n + 2, vector<int>(n + 2)));
        // 初始化一个三维数组 f，大小为 (m+1) * (n+2) * (n+2)
        for (int i = m - 1; i >= 0; i--) {
            // 遍历网格的行数，从倒数第二行开始到第一行
            for (int j = 0; j < min(n, i + 1); j++) {
                // 遍历列数，j 的取值范围为 0 到 min(n, i+1)
                for (int k = max(j + 1, n - 1 - i); k < n; k++) {
                    // 遍历列数，k 的取值范围为 max(j+1, n-1-i) 到 n-1
                    f[i][j + 1][k + 1] = max({
                                                     f[i + 1][j][k], f[i + 1][j][k + 1], f[i + 1][j][k + 2],
                                                     f[i + 1][j + 1][k], f[i + 1][j + 1][k + 1], f[i + 1][j + 1][k + 2],
                                                     f[i + 1][j + 2][k], f[i + 1][j + 2][k + 1], f[i + 1][j + 2][k + 2],
                                             }) + grid[i][j] + grid[i][k];
                    // 根据题意更新 f[i][j+1][k+1] 的值
                }
            }
        }
        return f[0][1][n];
        // 返回 f[0][1][n] 的值作为结果
    }
};


//class Solution {
//public:
//    int cherryPickup(vector<vector<int>>& grid) {
//        int m = grid.size(), n = grid[0].size();
//        vector<vector<int>> pre(n + 2, vector<int>(n + 2));
//        vector<vector<int>> cur(n + 2, vector<int>(n + 2));
//        for (int i = m - 1; i >= 0; i--) {
//            for (int j = 0; j < min(n, i + 1); j++) {
//                for (int k = max(j + 1, n - 1 - i); k < n; k++) {
//                    cur[j + 1][k + 1] = max({
//                                                    pre[j][k], pre[j][k + 1], pre[j][k + 2],
//                                                    pre[j + 1][k], pre[j + 1][k + 1], pre[j + 1][k + 2],
//                                                    pre[j + 2][k], pre[j + 2][k + 1], pre[j + 2][k + 2],
//                                            }) + grid[i][j] + grid[i][k];
//                }
//            }
//            swap(pre, cur); // 下一个 i 的 pre 是 cur
//        }
//        return pre[1][n];
//    }
//};


int main() {
    vector<vector<int>> grid = {{3,1,1},{2,5,1},{1,5,5},{2,1,1}};
    Solution s;
    cout << s.cherryPickup(grid) << endl;
    return 0;
}