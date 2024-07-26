class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++)
          nums1.push_back(nums2[i]);
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        double ans;
        if(n%2==0)
        {
            ans=(nums1[n/2] + nums1[(n/2)-1])/2.00000;
        } 
        else
           ans=nums1[n/2]/1.00000;
        return ans;
    }
};

/*
merge both the vectors
and sort the merge vector
if size of sorted vector is odd median is present at n/2 (where n is number of elements)
if size of sorted vector is even median is the sum of (n/2)th element and ((n/2)-1)th element

*/
