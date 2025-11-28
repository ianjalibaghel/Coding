class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt=0;
        unordered_map<int,int> ump;
        ump[0]=1;
        int pref=0,rem=0;
        for(auto it:nums){
            pref += it;
            rem = pref%k;
            if( rem<0) rem +=k;
            if(ump.find(rem) !=ump.end()){
                cnt += ump[rem];
            }
            ump[rem]++;
        }
        return cnt++;
    }
};