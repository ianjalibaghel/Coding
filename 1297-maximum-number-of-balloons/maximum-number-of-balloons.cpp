class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n=text.size();
        if(n<7) return 0;
        int ans=INT_MAX;
        string s="balloon";
        unordered_map<char,int> ump1,ump2;
        for(auto x:s){
            ump1[x]++;
        }
        for(auto x:text){
            ump2[x]++;
        }
        for(auto x:ump2){
            if(ump1.find(x.first)!=ump1.end()){
                ans= min(ans,x.second/ump1[x.first]);
                ump1.erase(x.first);
            }
        }
        if(ump1.size()==0)  return ans;
        return 0;
    }
};