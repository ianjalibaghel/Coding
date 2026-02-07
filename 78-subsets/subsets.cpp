class Solution {
private:
    void helper(int index,int n,vector<int>& nums,vector<int>temp,vector<vector<int>>& ans){
        ans.push_back(temp);
        for(int i=index;i<n;i++){
            temp.push_back(nums[i]);
            helper(i+1,n,nums,temp,ans);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return {};
        vector<int> temp;
        vector<vector<int>> ans;
        helper(0,n,nums,temp,ans);
        return ans;
    }
};