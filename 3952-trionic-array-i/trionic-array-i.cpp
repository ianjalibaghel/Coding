class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        int p=0,q=0;
        int i=0;
        while(i+1<n && nums[i]<nums[i+1])    i++;
        if(i==0) return false;
        p=i;
        while(i+1<n && nums[i+1]<nums[i]) i++;
        if(i==p) return false;
        q=i;
         while(i+1<n && nums[i]<nums[i+1])    i++;
         if(i==q) return false;
         return i==n-1;
    }
};