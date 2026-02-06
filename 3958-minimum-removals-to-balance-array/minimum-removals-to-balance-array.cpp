class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
      int n=nums.size();
      sort(nums.begin(),nums.end());
      int ans=n;
      int l=0,r=0;
      for(l=0,r=0;r<n;r++){
        int x= nums[r];
        while(l<r && (long long)nums[l]*k<x)    l++;
        ans = min(ans,n-(r-l+1));
      }  
      return ans;
    }
};