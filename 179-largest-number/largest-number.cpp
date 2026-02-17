class Solution {
private:
    static bool cmp(int a,int b){
        string s1= to_string(a);
        string s2= to_string(b);
        return s1+s2>s2+s1;
    }
public:
    string largestNumber(vector<int>& nums) {
        string ans;
        sort(nums.begin(),nums.end(),cmp);
        if(nums[0]==0) return "0";
        for(auto x:nums){
            ans += to_string(x);
        }
        return ans;
    }
};