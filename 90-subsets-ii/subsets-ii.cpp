class Solution {
private:
    void helper(int index,int n,vector<int>& nums,vector<int> temp,set<vector<int>>& s){
        s.insert(temp);
        for(int i=index;i<n;i++){
            temp.push_back(nums[i]);
            helper(i+1,n,nums,temp,s);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> s;
        vector<int> temp;
        helper(0,n,nums,temp,s);
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};