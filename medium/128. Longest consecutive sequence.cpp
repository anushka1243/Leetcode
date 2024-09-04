class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=1;
        int res=1;
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
              res++;
            else if(nums[i]!=nums[i-1])
            {
                ans=max(res,ans);
                res=1;
            }  
        }
        ans=max(res,ans);
        return ans;
    }
};
