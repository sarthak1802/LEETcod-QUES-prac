//Climbing Stairs
class Solution {
public:
    int climbStairs(int n) {
        int x=1,y=2,ans=0;

        if(n<=2){
            return n;
        }

        for(int i=3;i<=n;i++){
            ans=x+y;
            x=y;
            y=ans;
        }
        return ans;
    }
};
