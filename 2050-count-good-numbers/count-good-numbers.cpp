class Solution {
public:
 long long mod = 1e9+7;
    long long helper(long long b, long long n,long long ans){
        if(n==0) return ans;
        if(n&1) return helper(b,n-1,(b*ans)%mod);
        else return helper((b*b)%mod,n/2,ans);
    }
/// as for 5 even numbers in (0-9) and 4 prime numbers in (0-9)
    int countGoodNumbers(long long n) {
        long long ans=1;
       ans= helper(20,n/2,ans);
       return (n&1) ? (ans*5)%mod : ans;
    }
};
