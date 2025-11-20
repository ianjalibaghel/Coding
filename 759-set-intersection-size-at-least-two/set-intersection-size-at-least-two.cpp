class Solution {
public:
    static bool cmp(const vector<int>& x, const vector<int>& y) {
        if(x[1] == y[1]) return y[0] < x[0];
        return x[1] < y[1];
    }
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        int ans = 0, a = -1, b = -1;
        for(int i = 0; i < intervals.size();i++) {
            int l = intervals[i][0], r = intervals[i][1];
            if(l > b) {
                a = r - 1;
                b = r;
                ans += 2;
            } else if(l > a) {
                a = b;
                b = r;
                ans += 1;
            }
        }
        return ans;
    }
};