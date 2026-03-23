class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ump;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(ump.find(nums[i])!=ump.end()) {
                return {ump[nums[i]],i};
            }
            ump[target-nums[i]]=i;
        }
        return {};
    }
};