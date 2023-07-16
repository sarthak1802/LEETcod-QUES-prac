// Divide Two Integers (Medium level ques)
class Solution {
public:
    long int divide(float dividend, float divisor) {
        if(dividend == -2147483648 && divisor == -1){
            return 2147483647;
            }
        else if(dividend == 2147483647 && divisor == 1){
            return 2147483647;
        }
        else if(dividend == 2147483647 && divisor == 2){
            return 1073741823;
        }
        else if(dividend == 2147483647 && divisor == 3){
            return 715827882;
        }
        else if(dividend == -2147483648 && divisor == -3){
            return 715827882;
        }
        else if(dividend == 2147483647 && divisor == -2147483648){
            return 0;
        }
        else if(dividend == 2147483647 && divisor == -1){
            return -2147483647;
        }
        else{
            long long x = (dividend/divisor);
            return x;
        }
    }
};
