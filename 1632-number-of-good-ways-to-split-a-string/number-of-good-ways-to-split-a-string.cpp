class Solution {
public:
    int numSplits(string s) {
       int n=s.size();
       vector<int> left(26,0),right(26,0);
       int dLeft=0,dRight=0,ans=0;
       for(int i=0;i<n;i++){
        if(right[s[i]-'a']==0) dRight++;
        right[s[i]-'a']++;
       }
       for(int i=0;i<n-1;i++){
        char ch=s[i];
        if(left[ch-'a']==0) dLeft++;
        left[ch-'a']++;
        right[ch-'a']--;
if(right[ch-'a'] == 0) dRight--;

        if(dRight==dLeft) ans++;
       }
       return ans;
    }
};