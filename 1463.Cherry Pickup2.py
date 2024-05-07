# ##给你一个 rows x cols 的矩阵 grid 来表示一块樱桃地。 grid 中每个格子的数字表示你能获得的樱桃数目。
#
# 你有两个机器人帮你收集樱桃，机器人 1 从左上角格子 (0,0) 出发，机器人 2 从右上角格子 (0, cols-1) 出发。
#
# 请你按照如下规则，返回两个机器人能收集的最多樱桃数目：
#
# 从格子 (i,j) 出发，机器人可以移动到格子 (i+1, j-1)，(i+1, j) 或者 (i+1, j+1) 。
# 当一个机器人经过某个格子时，它会把该格子内所有的樱桃都摘走，然后这个位置会变成空格子，即没有樱桃的格子。
# 当两个机器人同时到达同一个格子时，它们中只有一个可以摘到樱桃。
# 两个机器人在任意时刻都不能移动到 grid 外面。
# 两个机器人最后都要到达 grid 最底下一行。

from typing import List
from functools import cache

# class Solution:
#     def cherryPickup(self, grid: List[List[int]]) -> int:#self 代表类的实例，grid 代表输入的矩阵。
#         # 定义一个 Solution 类，其中包含 cherryPickup 方法用于在给定网格上进行樱桃采摘，并返回可以采摘的最大数量。
#
#         m=len(grid)
#         n=len(grid[0])
#         # 获取网格的行数 m 和列数 n。
#
#         @cache  # ache 装饰器的作用是对 dfs 函数的结果进行缓存，以便在之后的递归调用中直接返回已经计算过的结果，而不必重复执行相同的计算过程。
#         # 缺失@cache 会导致超时，因为递归调用太多。！！！！
#         def dfs(i: int, j: int, k: int) -> int:# lambda 表达式
#             # 定义一个内部递归函数 dfs，该函数用于在当前位置 (i, j, k) 下，返回能够采摘的樱桃的最大数量。
#
#             if i == m or j < 0 or j >= n or k < 0 or k >= n:
#                 # 如果当前位置 (i, j, k) 超出了网格范围，则返回 0。
#                 return 0
#             # 返回可以采摘的樱桃的最大数量，利用递归计算所有可能的路径。
#
#             return max(dfs(i + 1, j2, k2) for j2 in (j - 1, j, j + 1) for k2 in (k - 1, k, k + 1)) + \
#                    grid[i][j] + (grid[i][k] if k != j else 0)
#             # 返回当前位置 (i, j, k) 可以采摘的樱桃的最大数量，通过从下一行中选择最大的结果，并加上当前位置的樱桃数以及如果 k 不等于 j，则还需要加上位置 k 的樱桃数。
#             # \ 用于在多行语句中作为换行符，表示下一行是当前语句的延续
#         return dfs(0, 0, n - 1)
#         # 调用 dfs 方法，从起始位置 (0, 0, n-1) 开始进行樱桃采摘，并返回最大可采摘数量。

# --------------------------------------------------

class Solution:
    def cherryPickup(self, grid: List[List[int]]) -> int:
        m, n = len(grid), len(grid[0])
        f = [[[0] * (n + 2) for _ in range(n + 2)] for _ in range(m + 1)]# 初始化三维数组
        # 在这个表达式中，[0] * (n + 2)创建一个长度为n+2的数组，
        # 并使用for _ in range(n + 2)来创建第二个维度的数组。
        # 这个过程被嵌套在for _ in range(m + 1)中，用于创建第三个维度的数组
        for i in range(m - 1, -1, -1):# 逆序遍历矩阵# [m-1,0]
            # 通过逆序遍历i，将每个问题缩小为一个子问题，并利用动态规划求解
            for j in range(min(n, i + 1)):# 左闭右开区间[0,min(n,i+1))
                for k in range(max(j + 1, n - 1 - i), n): # 左闭右开区间
                    f[i][j + 1][k + 1] = max(
                        f[i + 1][j][k], f[i + 1][j][k + 1], f[i + 1][j][k + 2],
                        f[i + 1][j + 1][k], f[i + 1][j + 1][k + 1], f[i + 1][j + 1][k + 2],
                        f[i + 1][j + 2][k], f[i + 1][j + 2][k + 1], f[i + 1][j + 2][k + 2],
                    ) + grid[i][j] + grid[i][k] #避免了j==k的情况
                    # f 初始化为0，通过动态规划求出f的值，并最终返回最大值

        return f[0][1][n]

# --------------------------------------------------------------------------
# class Solution:
#     def cherryPickup(self, grid: List[List[int]]) -> int:
#         m, n = len(grid), len(grid[0])
#         pre = [[0] * (n + 2) for _ in range(n + 2)]
#         cur = [[0] * (n + 2) for _ in range(n + 2)]
#         for i in range(m - 1, -1, -1):
#             for j in range(min(n, i + 1)):
#                 for k in range(max(j + 1, n - 1 - i), n):
#                     cur[j + 1][k + 1] = max(
#                         pre[j][k], pre[j][k + 1], pre[j][k + 2],
#                         pre[j + 1][k], pre[j + 1][k + 1], pre[j + 1][k + 2],
#                         pre[j + 2][k], pre[j + 2][k + 1], pre[j + 2][k + 2],
#                     ) + grid[i][j] + grid[i][k]
#             pre, cur = cur, pre  # 下一个 i 的 pre 是 cur
#         return pre[1][n]


print(Solution().cherryPickup([[3,1,1],[2,5,1],[1,5,5],[2,1,1]]))
