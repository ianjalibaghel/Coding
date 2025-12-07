class Solution {
public:
    int countOdds(int low, int high) {
      int counts{};
        for(int i{low};i<=high;++i)
        {
            if(i%2!=0)
                counts++;
        }
        return counts;
    }
};