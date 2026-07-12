class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> ump;
        set<int> s(begin(arr),end(arr));
        int rank=1;

        for(auto it:s){
            ump[it]=rank++;
        }

        for(auto &it:arr){
            it=ump[it];
        }
        return arr;
    }
};