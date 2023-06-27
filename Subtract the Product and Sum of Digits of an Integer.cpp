// 1281. Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,mul=1;
        while(n>0){
            int a=n%10;
            sum=sum+a;
            mul=mul*a;
            n=n/10;
        }
        return mul-sum;
    }
};
