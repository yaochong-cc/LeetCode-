class Solution:
    def rob(self, nums: List[int]) -> int:
        n=len(nums)
        f0=f1=0
        for i,x in enumerate (nums):
            new_f =max(f1,f0+x)
            f0=f1
            f1=new_f
        return f1 


#---------------------------
class Solution:
    def rob(self, nums: List[int]) -> int:
        n=len(nums)
        # @cache
        cache =[-1]*n
        def dfs (i):
            if i<0:
                return 0
            if cache[i]!=-1:
                return cache[i]
            res = max(dfs(i-1),dfs(i-2)+nums[i])
            cache[i]=res
            return res 

        return dfs(n-1)
#------------------------------------
class Solution:
    def rob(self, nums: List[int]) -> int:
        n=len(nums)
        @cache
        def dfs (i):
            if i<0:
                return 0
            res = max(dfs(i-1),dfs(i-2)+nums[i])
            return res 

        return dfs(n-1)
