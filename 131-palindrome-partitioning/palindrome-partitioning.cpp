class Solution {
private:
    bool palin(string temp,int start,int end){
        while(start<=end){
            if(temp[start]!=temp[end]) return false;
            else{
                start++;
                end--;
            }
        }
        return true;
    }
    void helper(int index,int n,string s, vector<vector<string>>& ans,vector<string> temp){
        if(index==n){
            ans.push_back(temp);
            return ;
        }
        for(int i=index;i<n;i++){
            if(palin(s,index,i)){
                temp.push_back(s.substr(index,i-index+1));
                helper(i+1,n,s,ans,temp);
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<string> temp;
        vector<vector<string>> ans;
        helper(0,n,s,ans,temp);
        return ans;
    }
};