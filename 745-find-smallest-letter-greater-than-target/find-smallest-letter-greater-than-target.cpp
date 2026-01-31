class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int asciiTarget= target-'0';

        for(int i=0;i<n;i++){
            int ascii= letters[i]-'0';
            if(asciiTarget<ascii){
                return letters[i];
            }
        }
        return letters[0];
    }
};