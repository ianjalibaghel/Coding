class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        int diff=0;
        for(int i=0;i<n-1;i++){
            diff= abs(arr[i+1]-arr[i]);
            mini=min(diff,mini);
        }
        for(int i=0;i<n-1;i++){
            diff= abs(arr[i+1]-arr[i]);
            if(diff==mini){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};