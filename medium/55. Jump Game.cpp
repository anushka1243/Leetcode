class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxx=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            maxx=max(maxx,nums[i]);
            if(maxx==0)return false;
            maxx--;
        }
        return 1;
    }
};
