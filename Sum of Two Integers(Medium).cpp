// Sum of Two Integers (Medium Level)

class Solution {
public:
    int getSum(int a, int b) {
        vector<int>ans={a,b};
        int sum=accumulate(ans.begin(),ans.end(),0);
        return sum;
    }
};
