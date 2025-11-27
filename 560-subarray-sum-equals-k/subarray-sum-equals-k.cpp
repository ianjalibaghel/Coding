class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0,sum=0;
        unordered_map<int,int> ump;
        int n=nums.size();
        for(int i=0;i<n;i++){
             sum+=nums[i];
            if(sum==k)  cnt++;
            int rem =sum-k;
            if(ump.find(rem)!=ump.end())    cnt += ump[rem];
            ump[sum]++;
        }
        return cnt;
    }
};