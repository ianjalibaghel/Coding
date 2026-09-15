class Solution {
public:
    string maskPII(string s) {
        string ans;
        if(s.find('@')!=s.npos){
            for(auto &ch : s) {
            ch = tolower(ch);
            }
            int pos = s.find('@');
            string name= s.substr(0,pos);
            string domain=s.substr(pos);
            return name.front()+string("*****")+name.back()+domain;
        }
        string digits;
        for(auto x:s){
            if(isdigit(x)){
                digits+=x;
            }
        }
        int n=digits.size();
        int country=n-10;
        if(country>0){
            ans +='+';
            ans += string(country,'*');
            ans +='-';
        }
        ans += string("***-***-");
        ans += digits.substr(n-4);
        return ans;
    }
};