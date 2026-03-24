class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int i=0,j=0;
        int n=s.size();
        if(n<=1) return n;
        set<char> st;

        while(i<n && j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                ans = max(ans,j-i+1);
                 j++;
            }else{
                st.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};