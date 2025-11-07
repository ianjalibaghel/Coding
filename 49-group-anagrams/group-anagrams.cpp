class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        if(n==1) return {{strs[0]}};       
        vector<vector<string>> ans;
       unordered_map<string,vector<string>> ump;

        for(auto x: strs){
            string temp=x;
            sort(temp.begin(),temp.end());
            ump[temp].push_back(x);
        }

        for(auto x: ump){
            ans.push_back(x.second);
        }
        return ans;
    }
};