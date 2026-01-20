class Solution {
private :
    int help(int x){
        int i=1;
        while(i<=x){
            int target= i |(i+1);
            if(target==x)   return i;
            i++;
        }
        return -1;
    }
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
 
        for(int i=0;i<n;i++){
            ans[i] = help(nums[i]);
        }
        return ans;
    }
};