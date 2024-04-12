//一场比赛中共有 n 支队伍，按从 0 到  n - 1 编号。
//
//给你一个下标从 0 开始、大小为 n * n 的二维布尔矩阵 grid 。对于满足 0 <= i, j <= n - 1 且 i != j 的所有 i, j ：如果 grid[i][j] == 1，那么 i 队比 j 队 强 ；否则，j 队比 i 队 强 。
//
//在这场比赛中，如果不存在某支强于 a 队的队伍，则认为 a 队将会是 冠军 。
//
//返回这场比赛中将会成为冠军的队伍
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;	
//class Solution {
//public:
//    int findChampion(vector<vector<int>>& grid) {
//        int size = grid.size();
//
//        for (int i = 0; i < size; i++) {
//            if (accumulate(grid[i].begin(), grid[i].end(), 0) == size - 1) {
//                return i;
//            }
//        }
//        return -1;
//    }
// 
//};
class Solution {
public:
	int findChampion(vector<vector<int>>& grid) {
		int size = grid.size();
		int max = 0;
		for (int i = 0; i < size; i++) {
			if (grid[i][max] == 1) {
				max = i;
			}	
		}
		return max;
	}

};
int main(){
	Solution sol;
	vector<vector<int>> grid = {{0, 1, 1, 0}, {1, 0, 1, 0}, {0, 1, 1, 0}, {1, 0, 0, 0}};
	cout << sol.findChampion(grid) << endl;
	return 0;
}
