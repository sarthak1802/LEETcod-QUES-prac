// Maximum 69 Number
class Solution {
public:
    int maximum69Number (int num) {
        vector<int>digits;
        int result = 0, k = 0;
        while(num){
            digits.push_back(num % 10);
            num /= 10;
        }
        for(int i = digits.size() - 1; i >= 0; i-- ){
            if(digits[i] == 6 && k==0){
                digits[i] = 9;
                k++;   
            }
            result = (result * 10) + digits[i];
        }
        
        return result;
    }
};
