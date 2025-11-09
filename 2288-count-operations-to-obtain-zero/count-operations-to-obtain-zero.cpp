class Solution {
private:
    int helper(int num1,int num2,int cnt){
        if(num1==0 ||num2==0) return cnt;
       return helper(num2, num1%num2,cnt + num1/num2);  //here we use num2 first as the division and reminder will handle both as num2 greater or smaller
    }
public:
    int countOperations(int num1, int num2) {
        return helper(num1,num2,0);
    }
};