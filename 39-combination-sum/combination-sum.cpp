class Solution {
private: 
    void helper(int index,int target,vector<int>& candidates,vector<int> temp,vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0 || index==candidates.size()) return;
        if(candidates[index]<=target){
            temp.push_back(candidates[index]);
            helper(index,target-candidates[index],candidates,temp,ans);
            temp.pop_back();
        }
        helper(index+1,target,candidates,temp,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        helper(0,target,candidates,temp,ans);
        return ans;
    }
};