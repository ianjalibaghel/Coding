class Solution {
public:
    int compressGridValues(vector<vector<int> > &grid){
        set<int> S;
        for(auto row : grid){
            for(auto cell : row){
                S.insert(cell);
            }
        }
        int P = 0;
        map<int, int> new_val;
        for(auto val : S){
            new_val[val] = P ++;
        }
        for(auto &row : grid){
            for(auto &cell : row){
                cell = new_val[cell];
            }
        }
        return P;
    }
    
    int minCost(vector<vector<int>>& grid, int k) {
        const int inf = 1e9;
        
        int n = (int)grid.size();
        int m = (int)grid[0].size();
        vector<vector<int> > cgrid = grid;
        int P = compressGridValues(cgrid);
        vector<vector<pair<int,int> > > valToCell(P + 1);
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m; j ++){
                valToCell[cgrid[i][j]].push_back({i, j});
            }
        }
        vector<vector<int> > dp1(n, vector<int>(m, inf));
        vector<int> dp2(P, inf);
        auto simpleWalk = [&]() -> void{
            for(int i = 0; i < n; i ++){
                for(int j = 0; j < m; j ++){
                    if(i - 1 >= 0){
                        dp1[i][j] = min(dp1[i][j], dp1[i-1][j] + grid[i][j]);
                    }
                    if(j - 1 >= 0){
                        dp1[i][j] = min(dp1[i][j], dp1[i][j-1] + grid[i][j]);
                    }
                    dp2[cgrid[i][j]] = min(dp2[cgrid[i][j]], dp1[i][j]);
                }
            }
        };
        auto teleportWalk = [&]() -> void{
            int minSoFar = 1e9;
            for(int i = P - 1; i >= 0; i --){
                minSoFar = min(minSoFar, dp2[i]);
                for(auto [r, c] : valToCell[i]){
                    dp1[r][c] = min(dp1[r][c], minSoFar);
                }
            }
        };
        dp1[0][0] = 0;
        simpleWalk();
        for(int i = 1; i <= k; i ++){
            teleportWalk();
            simpleWalk();
        }
        return dp1[n - 1][m - 1];
    }
};