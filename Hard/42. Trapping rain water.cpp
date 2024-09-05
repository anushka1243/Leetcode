class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        vector<int>v1,v2;
        int ans=0;
        int maxx=arr[0];
        v1.push_back(maxx);
        for(int i=1;i<n;i++)
        {
            if(arr[i]>maxx)
              maxx=arr[i];
            v1.push_back(maxx);  
        }
    
        
        maxx=arr[n-1];
        v2.push_back(maxx);
        for(int j=n-2;j>=0;j--)
        {
            if(arr[j]>maxx)
              maxx=arr[j];
            v2.push_back(maxx);  
        }
        reverse(v2.begin(),v2.end());
        
        for(int i=0;i<n;i++)
        {
            ans+=(min(v1[i],v2[i])-arr[i]);
        }
        return ans;
    }
};
