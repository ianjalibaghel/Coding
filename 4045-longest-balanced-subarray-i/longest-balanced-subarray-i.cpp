class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
        set<int> even,odd;
        int ans=0;
        for(int i=0;i<n;i++){
            odd.clear();
            even.clear();
            for(int j=i;j<n;j++){
                int num=nums[j];
                if(num&1) odd.insert(num);
                else even.insert(num);
                if(odd.size()==even.size()){
                    ans = max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};