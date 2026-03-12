class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum=nums[0],minSum=maxSum,sum=maxSum,currMax=maxSum,currMin=maxSum;
        for(int i=1;i<nums.size();i++){
            currMax= max(nums[i],currMax+nums[i]);
            maxSum =max(currMax,maxSum);
            currMin= min(nums[i],currMin+nums[i]);
            minSum= min(currMin,minSum);
            sum += nums[i];
        }
        return maxSum>0 ? max(maxSum,sum-minSum) :maxSum;
    }
};