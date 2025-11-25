class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<=2) return 0;
        int i=0,j=n-1;
        int right= height[j],left=height[i];
        int sum=0;
        while(i<j){
            if(left<=right){
                sum += (left-height[i]);
                i++;
                left =max(left,height[i]);
            }else{
                sum += (right-height[j]);
                j--;
                right =max(right,height[j]);

            }
        }
        return sum;
    }
};