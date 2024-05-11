class Solution:
    def satisfiesConditions(self, grid: List[List[int]]) -> bool:
        n, m = len(grid), len(grid[0])
        for i in range(n):
            for j in range(m):
                # 用整数非零时，bool 值为 True
                # i 就表示不在第一行，考虑前一行
                if i and grid[i][j] != grid[i-1][j]: return False
                # j 就表示不在第一列，考虑前一列
                if j and grid[i][j] == grid[i][j-1]: return False
        return True

