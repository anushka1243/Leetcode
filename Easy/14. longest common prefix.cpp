class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int z=-1;
       string v="";
       sort(strs.begin(),strs.end());
       for(int i=0;i<strs[0].size();i++)
       {
            int j=1;
            while(j<strs.size())
            {
                if(strs[0][i]!=strs[j][i])
                {
                    z=i;
                    break;
                }
                j++;
            }
            if(z==i)break;
            v+=strs[0][i];
       } 
        if(z==0)return "";
        else
          return v;
    }
};
