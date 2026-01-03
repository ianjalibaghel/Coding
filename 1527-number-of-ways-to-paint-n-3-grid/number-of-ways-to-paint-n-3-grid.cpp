class Solution {
public:
    int numOfWays(int n) {
        long long mod = 1e9+7;
        long long aba=6;
        long long abc=6;

        for(int i=2;i<=n;i++){
            long long new_aba= (3*aba +2*abc)%mod;
            long long new_abc= (2*aba +2*abc)%mod;
            aba= new_aba;
            abc= new_abc;
        }
        return (aba+abc)%mod;
    }
};