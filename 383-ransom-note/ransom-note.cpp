class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       int r1=ransomNote.size();
       int m1=magazine.size();
       if(r1>m1) return false;

       unordered_map<char,int> ump;
       for(auto i:magazine) ump[i]++;
       for(int i=0;i<r1;i++){
        if(ump[ransomNote[i]]==0){
            return false;
        }
        else
            ump[ransomNote[i]]--;
       } 
       return true;
    }
};