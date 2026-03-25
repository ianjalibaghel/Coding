class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        vector<long long> prefixR, prefixC;
        long long sum = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                sum+=grid[i][j];
            }
            prefixR.push_back(sum);
        }
        sum=0;
        for(int i=0; i<grid[0].size(); i++){
            for(int j=0; j<grid.size(); j++){
                sum+=grid[j][i];
            }
            prefixC.push_back(sum);
        }
        int n=prefixR.size();
        for(int i=0; i<prefixR.size(); i++){
            if(prefixR[n-1]-prefixR[i] == prefixR[i]){
                return true;
            }
        }   
        int m=prefixC.size();

        for(int i=0; i<prefixC.size(); i++){
            if(prefixC[m-1]-prefixC[i] == prefixC[i]){
                return true;
            }
        }
        return false;
    }
};