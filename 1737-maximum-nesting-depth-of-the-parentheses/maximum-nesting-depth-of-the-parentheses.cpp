class Solution {
public:
    int maxDepth(string s) {
        int ans=0,cnt=0;
        for(char i:s){
            if(i==')')
                cnt--;
            if(i=='('){
                cnt++;
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};