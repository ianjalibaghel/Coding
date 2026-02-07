class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        int ans=0,bCount=0;
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                bCount++;
            }else{
                ans = min(ans+1,bCount);
            }
        }
        return ans;
    }
};