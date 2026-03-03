class Solution {
public:
    char findKthBit(int n, int k) {
        string bits = "0";
        for(int i=1;i<n;i++){
            string newBits="1";
            for(int j=bits.size()-1;j>=0;j--){
                newBits += ((bits[j]=='0')?'1':'0');
            }
            bits += newBits;
        }
        return bits[k-1];
    }
};