class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       if(s1.size()>s2.size()) return false;
       int k=s1.size();
       vector<int> f1(26,0),f2(26,0);
        
        for(auto ch:s1) f1[ch-'a']++;
        for(int i=0;i<s2.size();i++){
            f2[s2[i]-'a']++;
            if(i>=k){
                f2[s2[i-k]-'a']--;
            }
            if(f1==f2) return true;
        }
        return false;
    }
};