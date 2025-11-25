class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
       unordered_set<int> s;
       int ans=0;
       for(auto x:nums) s.insert(x);
       for(auto i:s){
        int curr=i;
        if(s.find(curr-1)==s.end()){
            int len=1;
            while(s.find(curr+1)!=s.end()){
                curr++;
                len++;
            }
            ans= max(ans,len);
        }
       }
       return ans;
    }
};