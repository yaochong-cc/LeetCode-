from typing import List
from collections import defaultdict

class Solution:
    def longestEqualSubarray(self, nums: List[int], k: int) -> int:
        # 使用 defaultdict 构建字典，键为元素值，值为对应元素在 nums 中的索引列表
        pos = defaultdict(list)
        for i, num in enumerate(nums):# 枚举每个元素的索引和值
            #使用enumerate函数获取每个元素在列表中的索引i和对应的数值num。
            pos[num].append(i)

        ans = 0
        for vec in pos.values():
            j = 0
            for i in range(len(vec)):
                # 缩小窗口，直到不同元素数量小于等于 k
                while vec[i] - vec[j] - (i - j) > k:
                    j += 1
                ans = max(ans, i - j + 1)

        return ans

sol = Solution()
nums = [1, 1, 2, 2, 1, 1, 1]
k = 2
result = sol.longestEqualSubarray(nums, k)
print(result)