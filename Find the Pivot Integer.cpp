// Find the Pivot Integer
class Solution {
public:
    int pivotInteger(int n) {
        int x = (n*n+n)/2;
        int a = sqrt(x);
        if(a*a==x){
            return a;
        } 
        else{
            return -1;
        }
    }
};
