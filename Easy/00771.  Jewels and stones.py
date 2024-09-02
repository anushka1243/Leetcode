class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        ans=0
        for i in range(0,len(stones)):
            for j in range(0,len(jewels)):
                if stones[i]==jewels[j]:
                    ans+=1
        return ans
