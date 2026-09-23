class Solution {
public:
    int repeatedStringMatch(string a, string b) {
       int cnt=0;
        string temp="";
       while(temp.size()<b.size()){
        temp +=a;
        cnt++;
       }
       if(temp.find(b) != string::npos)
            return cnt;

        temp += a;
        cnt++;

        if(temp.find(b) != string::npos)
            return cnt;

        return -1;
    }
};