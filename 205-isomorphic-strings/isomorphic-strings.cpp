class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
      vector<int> sarr(256,0),tarr(256,0);  

      for(int i=0;i<s.size();i++){
        char c1=s[i];
        char c2=t[i];
        if(sarr[c1]==0 && tarr[c2]==0){
            sarr[c1]=c2;
            tarr[c2]=c1;
        }else if(sarr[c1]!=c2 || tarr[c2]!=c1){
            return false;
        }
      }
      return true;
    }
};