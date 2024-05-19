from typing import List
from itertools import pairwise
class Solution:
    def isArraySpecial(self, nums: List[int], queries: List[List[int]]) -> List[bool]:
        s=[0]
        for x,y in pairwise(nums):
            s.append(s[-1]+(x%2==y%2))
        return [s[f]==s[t] for f,t in queries]