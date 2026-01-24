class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int k=0,j=n-1;
        int maxi = INT_MIN,sum=0;
        for(int i=0;i<n/2;i++){
            sum =nums[k]+nums[j];
            maxi= max(sum,maxi);
            k++;
            j--;
        }
        return maxi;
    }
};