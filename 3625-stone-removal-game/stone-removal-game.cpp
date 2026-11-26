class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        bool flag=true;
        int stone=10;
        while(n>0){
            if(n<stone){
                return !flag;
            }   
            n= n-stone;
            stone--;
            flag = !flag; 
            
        }
        return !flag;
    }
};