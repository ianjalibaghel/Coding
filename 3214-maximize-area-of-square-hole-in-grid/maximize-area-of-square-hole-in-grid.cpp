class Solution {
private :
    int helper(int currbar,int maxbar,vector<int>& arr){
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]+1){
                currbar++;
            }else   currbar=1;
            maxbar=max(currbar,maxbar);
        }
        return maxbar;
    }
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        int maxhBar=1,maxvBar=1;
        maxhBar= helper(1,1,hBars);
        maxvBar=helper(1,1,vBars);
        int ans= min(maxhBar,maxvBar)+1;
        return ans*ans;

    }
};