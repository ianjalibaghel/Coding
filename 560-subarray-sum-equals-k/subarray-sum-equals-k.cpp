class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0,sum=0;
        unordered_map<int,int> ump;
        ump[0]=1;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            int rem= sum-k;
            if(ump.find(rem)!=ump.end())
                cnt += ump[rem];

            ump[sum]++;
        }
        return cnt;
    }
};