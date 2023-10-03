// Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int x = 1;
        for(int i=digits.size() - 1; i>=0; i--){
            int add = digits[i] + x;
            digits[i] = add%10;
            x = add/10;
        }
        if(x > 0){
            digits.insert(digits.begin(), x);
        }

        return digits;
    }
};
