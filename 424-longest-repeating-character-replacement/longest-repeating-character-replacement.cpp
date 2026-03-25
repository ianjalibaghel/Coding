class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0,curr=0,ans=0;
        unordered_map<int,int> ump;

        while(j<s.size()){
            ump[s[j]]++;
            curr=max(curr,ump[s[j]]);

            if((j-i+1)-curr>k){
                ump[s[i]]--;
                i++;
            }else{
                ans =max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};