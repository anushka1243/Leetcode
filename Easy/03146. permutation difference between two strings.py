class Solution:
    def findPermutationDifference(self, s: str, t: str) -> int:
        ans=0
        for i in s:
            r=s.index(i)
            l=t.index(i)
            ans+=abs(r-l)
        return ans   
