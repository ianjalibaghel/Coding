class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        if(n<=1) return -1;
        int left=0,right=n-1;
        int ans=0;

        while(left<right){
            int mini= min(height[left],height[right]);
            int product= mini*(right-left);
            ans= max(ans,product);
            if(height[left]>height[right])  right--;
            else left++;
        }
        return ans;
    }
};