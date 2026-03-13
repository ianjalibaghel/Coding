class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt=0;
        int sum=0;
        int avg=0;
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
            if(i>=k-1){
                avg = sum/k;
                if(avg>=threshold)  cnt++;
                sum -= arr[i-k+1];
            }
        }
        return cnt;
    }
};