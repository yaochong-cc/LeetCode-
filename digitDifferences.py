from typing import List

class Solution:
    def sumDigitDifferences(self, nums: List[int]) -> int:
        ans = 0
        cnt =[[0]*10 for _ in str(nums[0])]
        for k,x in enumerate(nums):
            for i,v in enumerate(map(int,str(x))):
                ans+=k-cnt[i][v]
                cnt[i][v]+=1
        return ans