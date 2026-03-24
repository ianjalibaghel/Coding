class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ump;
        vector<vector<string>> ans;

        for(auto s: strs){
            string temp=s;
            sort(temp.begin(),temp.end());
            ump[temp].push_back(s);
        }
        for(auto x:ump){
            ans.push_back(x.second);
        }
        return ans;
    }
};