class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()) return false;
        unordered_map<char,int> ump;
        for(int i=0,j=0;j<magazine.size();j++,i++){
            if(i<ransomNote.size()) ump[ransomNote[i]]--;
            ump[magazine[j]]++;
        }
        for(auto x: ump){
            if(x.second<0) return false;
        }
        return true;
    }
};