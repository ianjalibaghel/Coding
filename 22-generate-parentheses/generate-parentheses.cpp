class Solution {
void helper(int n,int open,int close, string s, vector<string> &ans){
    if(open==n && close==n){
        ans.push_back(s);
        return;
    }
    if(open<n){
        helper(n,open+1,close,s+'(',ans);
    }
    if(close<open){
        helper(n,open,close+1,s+')',ans);
    }
}
public:
    vector<string> generateParenthesis(int n) {
        if(n==1) return {"()"};
        vector<string> ans;
        helper(n,0,0,"",ans);
        return ans;
    }
};