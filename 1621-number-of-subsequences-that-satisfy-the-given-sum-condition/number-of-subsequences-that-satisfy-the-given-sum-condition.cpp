class Solution {
public:
    int mod= 1e9+7;
    vector<int> power;
    int helper(int l,int r, vector<int>& nums,int target){
        if(l>r) return 0;
        if(nums[l]+nums[r]<=target){
            return (power[r-l]+helper(l+1,r,nums,target))%mod;
        }else{
            return helper(l,r-1,nums,target);
        }
    }
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        power.resize(n);
        power[0]=1;
        for(int i=1;i<nums.size();i++)
            power[i]=(power[i-1]*2)%mod;
        return helper(0,n-1,nums,target);
    }
};