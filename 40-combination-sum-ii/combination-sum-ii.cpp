class Solution {
private:
    void helper(int index,vector<int>& candidates,vector<int> temp,vector<vector<int>>& ans,int target){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1])   continue;
            if(candidates[i]>target) return;
            temp.push_back(candidates[i]);
            helper(i+1,candidates,temp,ans,target-candidates[i]);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        helper(0,candidates,temp,ans,target);
        return ans;
    }
};