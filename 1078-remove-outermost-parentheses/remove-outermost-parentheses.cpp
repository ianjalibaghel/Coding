class Solution {
public:
    string removeOuterParentheses(string s) {
        int n,count=0;
        string ans;
        n=s.length();
        for(char c:s){
            if(c=='('){
                if(count==0)
                    count++;
                else{
                    ans+='(';
                    count++;
                }
            }
            else if(count>1){
                ans+=')';
                count--;
            }
            else 
                count--;

        }
        return ans;
    }
};