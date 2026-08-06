class Solution {
public:
    int helper(int num){
        int product=1;
        while(num>0){
            int rem= num%10;
            product *= rem;
            num /= 10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        while(true){
            int product = helper(n);
            if(product%t==0){
                return n;
            }
            n++;
        }
    }
};