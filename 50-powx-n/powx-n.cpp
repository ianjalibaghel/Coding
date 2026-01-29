class Solution {
private:
    double helper(double x, int n){
        if(n==0)    
            return 1;
        double half =helper(x,n/2);
        if(n%2==0) return half*half;
        else return half*half*x;
    }
public:
    double myPow(double x, int n) {
        long N=n;
       if(n<0){ x= 1/x;
       N=-1*N;
       }
      return helper(x,abs(N));
    }
};