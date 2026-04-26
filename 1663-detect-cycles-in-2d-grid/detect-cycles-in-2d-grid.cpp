int dir[5]={0, 1, 0, -1, 0};
int r, c;
class Solution {
public:
    static inline bool isOutside(int i, int j, int r, int c){
        return i<0||i>=r||j<0||j>=c;
    }
    static bool dfs(int i, int j, int i0, int j0, int alpha, vector<vector<char>>& grid){
        grid[i][j]=-alpha;
        for(int a=0; a<4; a++){
            const int s=i+dir[a], t=j+dir[a+1];
            if (isOutside(s, t, r, c) || (s==i0 && t==j0)) continue;
            if (grid[s][t]==-alpha) return 1;
            if (grid[s][t]==alpha){
                if (dfs(s, t, i, j, alpha, grid)) return 1;
            }
        }
        return 0;
    }
    static bool containsCycle(vector<vector<char>>& grid) {
        r=grid.size(), c=grid[0].size();
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if (grid[i][j]<0) continue;
                if (dfs(i, j, -1, -1, grid[i][j], grid)) return 1;
            }
        }
        return 0;
    }
};
