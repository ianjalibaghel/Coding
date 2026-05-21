class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int ans=0;
        unordered_map<string,int> prefixmap;

        for(const auto& num:arr1){
            string s1=to_string(num);
            string prefix="";
            for(const auto& ch:s1){
                prefix += ch;
                prefixmap[prefix]++;
            }
        }

        for(const auto& num:arr2){
            string s2=to_string(num);
            string prefix="";
            for(const auto& ch:s2){
                prefix += ch;
                if(prefixmap.count(prefix)>0){
                    ans = max( ans, (int)prefix.size());
                }
            }
        }

        return ans;
    }
};