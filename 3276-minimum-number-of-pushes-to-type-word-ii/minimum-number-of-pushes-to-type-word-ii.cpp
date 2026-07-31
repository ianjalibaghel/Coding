class Solution {
public:
    int minimumPushes(string word) {
      int n=word.size();
      int ans=0;
      unordered_map<char,int> ump;
      vector<pair<int,char>> v;

      for(int i=0;i<n;i++){
        ump[word[i]]++;
      }

      for(auto& it: ump){
        v.push_back({it.second,it.first});
      }

      sort(v.rbegin(),v.rend());
        int push = 1;

      for(int i=0;i<v.size();i++){

        ans= ans+(v[i].first * push);
       // if we put more frequency number on the first digit of button then increase the push after first position of 8 buttons fill
        if((i+1)%8 == 0){
            push++;
        }
      }

      return ans;  
    }
};