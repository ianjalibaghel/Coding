class Solution {
public:
    int numberOfSubstrings(string s) {
        const int n=s.size();
        int cnt=0, letter=0, freq[3]={0};
        for(int l=0, r=0; r<n; r++){
            const int c=s[r]-'a';
            if (++freq[c]==1) letter++;
            while( letter==3 ){
                if (--freq[s[l]-'a']==0) letter--;
                l++;
            }
            cnt+=l;
        }
        return cnt;
    }
};