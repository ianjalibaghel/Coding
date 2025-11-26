class Solution{
private:
    bool isSeq(string s,string t, int m,int n){
        int j=0;
        for(int i=0;i<m && j<n;i++){
            if(s[i]==t[j]) j++;
        }
        return j==n;
    }
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int cnt=0;
        unordered_map<string,bool> ump;
        for(auto x: words){
            if(ump.find(x)!=ump.end()){
                if(ump[x]==true)    cnt++;
                continue;
            }
            ump[x]= isSeq(s,x,s.size(),x.size());
            cnt += (ump[x]==true);
        }
        return cnt;
    }
};