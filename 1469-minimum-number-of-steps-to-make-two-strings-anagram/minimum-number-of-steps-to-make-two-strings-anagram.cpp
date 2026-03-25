class Solution {
public:
    int minSteps(string s, string t) {
        int ans =0;
        vector<int> freqS(26,0),freqT(26,0);
        for(auto i:s) freqS[i-'a']++;
         for(auto i:t) freqT[i-'a']++;
        for(int i=0;i<26;i++){
           if(freqT[i]>freqS[i]){
                ans += (freqT[i] - freqS[i]);
           }
        }
        return ans;
    }
};