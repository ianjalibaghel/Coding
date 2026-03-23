class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> ump;
        for(int i=0;i<s.size();i++){
            ump[s[i]]++;
            ump[t[i]]--;
        }
        for(auto x:ump){
            if(x.second!=0)   return false;
        }
        return true;
    }
};