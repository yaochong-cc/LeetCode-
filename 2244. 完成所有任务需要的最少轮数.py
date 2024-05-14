from collections import Counter
from typing import List
class Solution:
    def minimumRounds(self,tasks:List[int])->int:
        cnt=Counter(tasks)
        if 1 in cnt.values():
            return -1
        return sum((c+2)//3 for c in cnt.values())

sol=Solution()
print(sol.minimumRounds([2,2,3,3,2,4,4,4,4,4]))