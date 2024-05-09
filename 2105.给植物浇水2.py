class Solution:
    def minimumRefill(self, plants: List[int], capacityA: int, capacityB: int) -> int:
        i,j=0,len(plants)-1
        a,b=capacityA,capacityB
        ans=0
        while i<j:
            if a<plants[i]:
                ans+=1
                a=capacityA
            a-=plants[i]
            i+=1

            if b<plants[j]:
                ans+=1
                b=capacityB
            b-=plants[j]
            j-=1
        if i==j and max(a,b)<plants[i]:
            ans+=1

        return ans 
