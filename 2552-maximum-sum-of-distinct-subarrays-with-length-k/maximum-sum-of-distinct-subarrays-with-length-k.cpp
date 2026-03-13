class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       long long sum=0;
       long long ans=0;
       unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++){
           sum +=nums[i];
           ump[nums[i]]++;
           if(i>=k-1){
            if(ump.size()==k){
                ans = max(ans,sum);
            }
            int x =nums[i-k+1];
            sum -= x;
            ump[x]--;
            if(ump[x]==0) ump.erase(x);
           }
        }
        return ans;
    }
};