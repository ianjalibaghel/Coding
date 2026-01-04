class Solution {
private: 
    int helper(int n){
        int cnt=2,sum=1+n;
        for(int i=2;i*i<=n;i++){
            if(n%i ==0){
                cnt++;
                sum +=i;
                if (i != n / i)
                {
                    cnt++;
                    sum +=n/i;
                }
            }
        }
        if(cnt==4) return sum;
        return -1;
    }
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(auto i:nums){
            int divSum= helper(i);
            if(divSum!= -1){
                sum += divSum;
            }
        }
        return sum;
    }
};