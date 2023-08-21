// Sum of Digits in Base K
class Solution {
public:
    int sumBase(int n, int k) {
        int num = 0;
        while(n)
        {
            num+= n % k;
            n/=k;
        }
        return num;
    }
};
