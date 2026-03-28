class Solution {
public:
    string minWindow(string s, string t) {
        if(s==t) return t;
        if(t.size()>s.size()) return "";
        unordered_map<int,int> freqT,cnt;
        
        for(auto i:t){
            freqT[i]++;
            cnt[i]=0;
        }

        int length=INT_MAX,i=0,j=0,start=-1,size=0;

        while(j<s.size()){
            char temp= s[j];
            if(freqT.find(temp)!=freqT.end()){
                cnt[temp]++;
                if(freqT[temp]==cnt[temp])  size++;
            }
            while(freqT.size()==size){
                int windowSize= j-i+1;
                char leftChar = s[i];
                if(windowSize<length){
                    length=windowSize;
                    start=i;
                }
                if(freqT.find(leftChar)!=freqT.end()){
                    cnt[leftChar]--;
                    if(cnt[leftChar]<freqT[leftChar]) size--;
                }
                i++;
            }
            j++;
        }
        if(start==-1) return "";
        return s.substr(start,length);
    }
};